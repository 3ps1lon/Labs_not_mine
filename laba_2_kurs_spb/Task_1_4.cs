using System;

namespace Dolgi
{
    class Task_1_4
    {
        static double s;    // глобальгная переменная, чтобы не выводить в каждом условии s
        static void Task14()
        {
            double x, y;
            

            Console.Write("x: ");
            x = Convert.ToDouble(Console.ReadLine());   // ввод х

            Console.Write("y: ");
            y = Convert.ToDouble(Console.ReadLine());   // ввод у

            if (x > y)                                  // первое условие из задания x > y
            {
                s = x - y;                              // s будет равно х - у по заданию
            }

            else if (x <= y && ( (x * x) + (y * y) ) < 1)   // аналогично для остальных
            {                                               // просто переписываем условие
                s = x * x + y * y;                          // и считаем
            }

            else if (x <= y && ( (x * x) + (y * y) ) >= 1)  // && - "и"
            {
                s = x / (x * x + y * y);
            }

            Console.WriteLine("s = {0}", s);
        }
    }
}
