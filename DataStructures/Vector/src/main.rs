struct Vector<T> {
    vector: Box<[T]>,
    size: i32,
}

impl<T> Vector<T> {
    fn set(&self) -> i32 {
        self.size
    }
}

fn main() {
    let sf = Vector {
        vector: Box::new([1,2,3]),
         size: 3
        };
    
    let sz = sf.set();
    println!("{}", sz);
}
