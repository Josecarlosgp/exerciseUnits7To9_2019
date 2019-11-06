// Jose Carlos Giner Poveda
using System;
class exercise2
{
    static void Main()
    {
        string text;
        bool existe;
        do
        {
            existe=false;
            Console.Write("Enter a text: ");
            text=Console.ReadLine();
           
            foreach (char letter in text)
            {
                if(letter=='a' || letter=='A')
                existe=true;
            }
        }
        while(existe==true);
    }
}
        
        
