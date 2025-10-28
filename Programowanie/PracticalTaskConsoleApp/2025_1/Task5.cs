namespace PracticalTaskConsoleApp._2025_1
{
    internal class Task5
    {
        public void Task()
        {
            WashingMachine washingMachine = new WashingMachine();
            VacuumCleaner vacuumCleaner = new VacuumCleaner();

            Console.WriteLine("Podaj numer prania 1..12");
            int washingProgramNumber = int.Parse(Console.ReadLine());
            washingMachine.SetWashingProgram(washingProgramNumber);

            vacuumCleaner.on();
            vacuumCleaner.on();
            vacuumCleaner.on();
            vacuumCleaner.ShowInfo("Odkurzacz wyładował się");
            vacuumCleaner.off();
        }
    }
}