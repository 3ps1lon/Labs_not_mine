using System;

namespace Dolgi
{
    class Task_1_1
    {
        static void Main(string[] args)
        {
            
            double t, p, lnt,k; // объявление переменных
            k = Convert.ToDouble(Console.ReadLine());
            t = 2.85d;        // t = 2,85 по заданию
            lnt = Math.Log(t, Math.E);      // задание целоцисленного логарифма при t ln(t)
            p = 3 * t / (Math.Pow(lnt, 2)) * (Math.Pow((lnt - 1), 2));      // формула данная в задании. Math.Pow(x , y) - возведение x в степень y

            Console.WriteLine("t = {0}\nln(t) = {1}\np = {2}", t, lnt, p);  // вывод переменных " t = {0} " и т.д. {0} ставим переменную t и т.п.
                                                                            // \n это перенос на другую строчку
            Console.WriteLine(DateTime.Now);
        }
    }
}
