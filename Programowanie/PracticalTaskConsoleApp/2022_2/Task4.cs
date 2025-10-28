namespace PracticalTaskConsoleApp.Czerwiec2022_2
{
    internal class Task4
    {
        public void Task()
        {
            Console.WriteLine($"Liczba zarejestrowanych osób to {Person.instanceCount}\n");
            Person firstPerson = new Person();
            Console.WriteLine("Wypisanie imienia z pierwszego obiektu:");
            firstPerson.Greet("Jan");

            Console.WriteLine("\n");

            Console.WriteLine("Wprowadź dane do stworzenia drugiego obiektu:");
            Console.WriteLine("Wprowadź imię:");
            string name = Console.ReadLine();

            Console.WriteLine("Wprowadź id:");
            int id = int.Parse( Console.ReadLine());

            Person secondPerson = new Person(name, id);
            Console.WriteLine("\nWypisanie imienia z drugiego obiektu:");
            secondPerson.Greet("Jan");

            Person thirdPerson = new Person(secondPerson);
            Console.WriteLine("\nWypisanie imienia z trzeciego obiektu:");
            thirdPerson.Greet("Jan");

            Console.WriteLine("\n");

            Console.WriteLine($"Liczba zarejestrowanych osób to {Person.instanceCount}");
        }
    }
}
