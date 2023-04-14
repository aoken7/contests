use proconio::input;

fn main() {
    input! {
        s: String,
    }

    let a = s.as_bytes()[0] as char;
    let b = s.as_bytes()[1] as char;
    let c = s.as_bytes()[2] as char;

    if a != b && a != c {
        println!("{}",a);
    }else if a != b && b != c {
        println!("{}",b);
    }else if a != c && b != c {
        println!("{}", c);
    }else{
        println!("{}", -1);
    }
}


