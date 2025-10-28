namespace PracticalTaskConsoleApp._2025_1
{
    internal class VacuumCleaner : Device
    {
        private bool isTurnedOn = false;

        public void on()
        {
            if (!isTurnedOn)
            {
                isTurnedOn = true;
                ShowInfo("Odkurzacz włączono");
            }
        }

        public void off()
        {
            if (isTurnedOn)
            {
                isTurnedOn = false;
                ShowInfo("Odkurzacz wyłączono");
            }   
        }
    }
}
