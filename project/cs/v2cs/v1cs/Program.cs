using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace v1cs
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Model of librery worcking");
            Console.WriteLine("Auror is Nadia Abrashina, IS-52");
            Console.WriteLine("START MODELING");
            Console.WriteLine();
            Library lib = new Library();
            Console.WriteLine();
            Library lib1 = new Library(100, 100, true, 1);
            Console.WriteLine();
            Library lib2 = new Library(lib1);
            Console.WriteLine();
            Console.WriteLine("END MODELING");
            Console.ReadKey();
        }
    }
}
