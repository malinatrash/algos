use std::io;

fn input() -> String {
    let mut input_str = String::new();
    io::stdin().read_line(&mut input_str).expect("");
    input_str.trim().to_string()
}

fn a_dwa_sosuda() {
    let mut t: i32 = input().parse().unwrap();
    while t > 0 {
        let input_line = input();
        let mut iter = input_line.split_whitespace().map(|s| s.parse::<i32>().unwrap());

        let a = iter.next().unwrap();
        let b = iter.next().unwrap();
        let c = iter.next().unwrap();

        let dif = i32::abs(a - b);

        if dif == 0 {
            println!("{}", 0);
        } else if dif <= c * 2 {
            println!("{}", 1);
        } else if dif % (c * 2) == 0 {
            println!("{}", dif / c / 2);
        } else {
            println!("{}", dif / c / 2 + 1);
        }

        t -= 1;
    }
}

fn main() {
    a_dwa_sosuda();
}
