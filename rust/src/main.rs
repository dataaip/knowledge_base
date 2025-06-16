mod manager;

use manager::game::game;
use manager::calculator::calculator;

// 程序入口函数 fn 声明函数， () 参数， {} 函数体
fn main() {
    
    // 猜字游戏库
    game();

    // 科学计算器库
    calculator();

    // tour_rust rust 学习库
    println!("{}", tour_rust::add(10, 20));
    tour_rust::tour_rust_fn();
}
