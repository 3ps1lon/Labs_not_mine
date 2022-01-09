using System;

namespace Dolgi
{
    class Task_1_2
    {
        static void Task12()
        {
            double x, y, sinx;

            x = 0.56;       // табличное значение
            
            sinx = Math.Pow(Math.Sin(x)-x,2);   // вычисляем (sin(x)-x)^2

            y = 1 * sinx / 3 + Math.Log(sinx, 2);   // выражение из задания

            Console.WriteLine("x = {0}\ny = {1}\nsinx = {2}", x, y, sinx);      // аналогичный вывод, позже писать не буду о нем

        }
    }
}
