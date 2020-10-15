using System;

namespace CSharp0017_FunctionsSample2
{
    class CSharp0017_FunctionsSample2
    {
        static int isPentagonal(int number)
        {
            int i;
            for (i = 0; number > 0; i++)
                number -= 1 + 3 * i;
            if (number == 0)
                return 1;
            return 0;
        }

        static void Main(string[] args)
        {

            int x;
            do
            {

                x = int.Parse(Console.ReadLine());
                if (x > 0)
                    if(Convert.ToBoolean(isPentagonal(x)))
                        Console.WriteLine(x + " is a triangular number");
                    else
                        Console.WriteLine(x + " is NOT a triangular number");
            } while (x > 0);
        }
    }
}
