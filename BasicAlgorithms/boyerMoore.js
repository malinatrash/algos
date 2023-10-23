function boyerMoore(haystack, needle) {
	const haystackLength = haystack.length;
	const needleLength = needle.length;

	if (needleLength === 0) {
		return 0; // Пустая подстрока всегда найдется в начале строки.
	}

	// Создаем Map для хранения информации о последних вхождениях символов в needle.
	const last = new Map();
	for (let i = 0; i < needleLength; i++) {
		last.set(needle[i], i);
	}

	let i = needleLength - 1; // Индекс в строке haystack.
	let j = needleLength - 1; // Индекс в needle.

	while (i < haystackLength) {
		if (haystack[i] === needle[j]) {
			if (j === 0) {
				return i; // Найдено полное вхождение.
			}
			i--;
			j--;
		} else {
			// Используем таблицу last для определения сдвига.
			const lastIndex = last.get(haystack[i]);
			i +=
				needleLength -
				Math.min(j, 1 + (lastIndex !== undefined ? lastIndex : -1));
			j = needleLength - 1;
		}
	}

	return -1; // Подстрока не найдена.
}

const haystack = 'This is a simple example.';
const needle = 'example';
const result = boyerMoore(haystack, needle);
console.log(result);
