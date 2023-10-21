const readline = require('readline');

const rl = readline.createInterface({
	input: process.stdin,
	output: process.stdout,
});

// Данные во входном потоке могут состоять из нескольких строк.
// Чтобы прочитать их, можно использовать метод rl.on(),
// который вызывается каждый раз при появлении новой строки
// в потоке ввода.
// Чтобы вывести результат в поток вывода (stdout),
// можно использовать метод console.log().
// Пример:
// console.log('Результат:', result);

// Пример решения задачи "Вычислите сумму A+B":
rl.on('line', line => {
	const [a, b] = line.split(' ').map(Number);
	console.log(a + b);
	rl.close();
});
