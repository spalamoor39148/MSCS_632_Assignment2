// rust_owned.rs
fn make_vec() -> Vec<i32> {
    let v = vec![1, 2, 3, 4, 5]; // heap allocation
    v // ownership moved to caller
}

fn sum_vec(v: &Vec<i32>) -> i32 {
    v.iter().sum()
}

fn main() {
    let v = make_vec(); // v owns the vector
    println!("sum = {}", sum_vec(&v));
    // v is dropped automatically at end of scope; memory freed
}
