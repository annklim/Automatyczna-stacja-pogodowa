package StronaWWW;

/**
 *
 * \brief Klasa odpowiadająca za stronę WWW
 *
 * Klasa posiada 3 funkcje odpowiedzialne za pobieranie wartości z bazy danych, 
 * wyświetlanie ich na stronie w postaci wykresów oraz wybór zakresu z jakiego
 * mają być wyświetlane pomiary.
 * @author Paweł
 */
public class StronaWWW 
{
public:
		
    /**
     * funkcja pobierająca pomiary z bazy danych
	 * @param temperatura tablica, ktora przechowuje pomiary pobrane z czujnika temperatury
	 * @param cisnienie tablica, ktora przechowuje pomiary pobrane z czujnika cisnienia
	 * @param sila_wiatru tablica, ktora przechowuje pomiary pobrane z czujnika wiatru
	 * @param kierunek_wiatru tablica, ktora przechowuje pomiary pobrane z czujnika wiatru
	 * @param opady tablica, ktora przechowuje pomiary pobrane z czujnika opadow
     */
    public void zbieranie_pomiarow(double [] temperatura, double [] cisnienie, double [] sila_wiatru, double [] kierunek_wiatru, double [] opady){
        
    }
    
    /**
     * funkcja rysująca wykresy na podstawie pobranych danych
	 * @param temperatura tablica, ktora przechowuje pomiary pobrane z czujnika temperatury
	 * @param cisnienie tablica, ktora przechowuje pomiary pobrane z czujnika cisnienia
	 * @param sila_wiatru tablica, ktora przechowuje pomiary pobrane z czujnika wiatru
	 * @param kierunek_wiatru tablica, ktora przechowuje pomiary pobrane z czujnika wiatru
	 * @param opady tablica, ktora przechowuje pomiary pobrane z czujnika opadow
	 * @param zakres zmienna określająca okres czasu z jakiego mają być wyświetlane pomiary [podawana w godzinach]
     */
    public void wyswietl_pomiary(double [] temperatura, double [] cisnienie, double [] sila_wiatru, double [] kierunek_wiatru, double [] opady, int zakres){
        
    }
    
    /**
     * funkcja pozwalajaca na wybranie okres czasu z jakiego mają być wyświetlane pomiary
     * @param zakres zmienna określająca okres czasu z jakiego mają być wyświetlane pomiary [podawana w godzinach]
     */
    public void okreslenie_zakresu_danych(int *zakres){
			
    }
    
    
}

