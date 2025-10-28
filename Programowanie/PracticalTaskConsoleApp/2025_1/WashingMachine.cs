namespace PracticalTaskConsoleApp._2025_1
{
    internal class WashingMachine : Device
    {
        private int washingProgramNumber = 0;

        public int SetWashingProgram(int number)
        {
            if (number >= 1 && number <= 12)
            {
                washingProgramNumber = number;
                ShowInfo("Program został ustawiony");
            }
            else
            {
                washingProgramNumber = 0;
                ShowInfo("Podano niepoprawny numer programu");
            }
            return washingProgramNumber;
        }
    }
}
