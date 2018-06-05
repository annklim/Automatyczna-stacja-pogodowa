package Interfejs_graficzny;

/**
 *
 * \brief Klasa odpowiadająca za interfejs graficzny
 *
 * Klasa posiada 3 funkcje odpowiedzialne za pobieranie wartości z bazy danych, 
 * wyświetlanie ich na ekranie w postaci wykresów oraz wybór zakresu z jakiego
 * mają być wyświetlane pomiary. 2 zmienne odpowiadają wymiarom wyświetlacza.
 * @author Paweł
 */
public class Interfejs_graficzny 
{
public:
	/** zmienna przechowująca wysokość wyświetlacza w pikselach */
	int wysokosc;
	/** zmienna przechowująca szerokość wyświetlacza w pikselach */
	int szerokosc;
	
    /**
     * funkcja pobierająca pomiary z bazy danych
	 * @param temperatura tablica, ktora przechowuje pomiary pobrane z czujnika temperatury
	 * @param cisnienie tablica, ktora przechowuje pomiary pobrane z czujnika cisnienia
	 * @param sila_wiatru tablica, ktora przechowuje pomiary pobrane z czujnika wiatru
	 * @param kierunek_wiatru tablica, ktora przechowuje pomiary pobrane z czujnika wiatru
	 * @param opady tablica, ktora przechowuje pomiary pobrane z czujnika opadow
     */
    public void pobierz_dane_z_bazy(double [] temperatura, double [] cisnienie, double [] sila_wiatru, double [] kierunek_wiatru, double [] opady){
        
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
    public void rysuj_wykresy(double [] temperatura, double [] cisnienie, double [] sila_wiatru, double [] kierunek_wiatru, double [] opady, int zakres){
        
    }
    
    /**
     * funkcja pozwalajaca na wybranie okres czasu z jakiego mają być wyświetlane pomiary
     * @param zakres zmienna określająca okres czasu z jakiego mają być wyświetlane pomiary [podawana w godzinach]
     */
    public void okreslenie_zakresu_danych(int *zakres){
			
    }
    
    
}

