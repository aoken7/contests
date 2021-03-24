use proconio::input;

fn main() {
    input!{
        a: i32,
        b: i32,
        c: i32,
        d: i32,
    }

    if a+b < c+d{
        println!("Right");
    }else if a+b > c+d{
        println!("Left");
    }else{
        println!("Balanced");
    }
}
