use proconio::input;

fn main() {
    input!{
        d : i32,
        c : [i32;26],
        s : [[i32; d];26],
        t : [i32;d],
    }

    dbg!(d);
    dbg!(c);
    dbg!(s);
    dbg!(t);
}
