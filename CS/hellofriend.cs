using System;

//namespace declaration here !?!
class program
{
    static void Main()
    {
        Console.Write("Greetings! Enter a number: ");
        int res;
        res = Convert.ToInt32(Console.ReadLine());
        Console.WriteLine("The num is: " + res + ". I am very smart. What is your name?");//Console.Write will write without a newline being added at the end
        string name = Console.ReadLine();
        Console.WriteLine("Nice to meet you " + name + ". You are very smart 2 :)");
    }
}
