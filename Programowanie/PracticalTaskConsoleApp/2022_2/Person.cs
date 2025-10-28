namespace PracticalTaskConsoleApp.Czerwiec2022_2
{
    internal class Person
    {
        public static int instanceCount = 0;
        private int id;
        private string name;

        public Person()
        {
            instanceCount++;
            id = 0;
            name = "";
        }

        public Person(string name, int id)
        {
            instanceCount++;
            this.id = id;
            this.name = name;
        }

        public Person(Person person)
        {
            instanceCount++;
            id = person.id;
            name = person.name;
        }

        public void Greet(string argument)
        {
            if (name != null && name != "")
            {
                Console.WriteLine($"Cześć {argument}, mam na imię {name}");
            } else
            {
                Console.WriteLine("Brak danych");
            }
        }
    }
}
