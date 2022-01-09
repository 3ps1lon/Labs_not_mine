using System;

namespace Dolgi
{
    class Task_2_2
    {
        static int len;
        static void Task22()
        {
            double a, b, h;
            
            Console.Write("a: ");
            a = Convert.ToDouble(Console.ReadLine());                        // ввод переменных 

            Console.Write("b: ");
            b = Convert.ToDouble(Console.ReadLine());

            Console.Write("h: ");
            h = Convert.ToDouble(Console.ReadLine());

            len = (Math.Abs(h) - Math.Abs((int) h)).ToString().Length - 2;  // это для округления, иначе будут числа формата 1,2561289999999999
                                                                            // просто количество знаков после запятой у h
            Console.WriteLine(len);
            while (Math.Round(a, len) < Math.Round(b, len) + h)             // округление чисел а, b до len знаков после запятой ( len нашли выше)
            {
                a = Math.Round(a, len);
                if (Math.Log(1 + a, Math.E) > (2 * Math.Atan(a) / (1 + a))) // просто выражение, если оно верно, то выводим х
                {
                    Console.WriteLine("x: {0}", a);
                }
                a += h;
            }
        }
    }
}
