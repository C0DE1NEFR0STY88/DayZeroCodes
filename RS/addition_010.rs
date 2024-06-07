fn add_calc(arec:i32, brec:i32, crec:i32) -> i32
{
    
    return arec+brec+crec;
}

fn main()
{
    
    let (a,b,c) : (i32,i32,i32) = (2,3,4);
    let sum = add_calc(a,b,c);
    println!("The sum of {}, {} and {} is {}", a,b,c,sum);
}
