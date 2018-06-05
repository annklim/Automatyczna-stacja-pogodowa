/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package stacjapogodowa;

/**
 *
 * @author Ania
 * Główna klasa automatycznej stacji pogodowej
 */
public class StacjaPogodowa {

    /**
     * funkcja wyłączająca automatyczną stację pogodową
     */
    public void wylacz(){
        
    }
    
    /**
     * funkcja umożliwia zrestartowanie automatycznej stacji pogodowej
     */
    public void restart(){
        
    }
    
    /**
     * Funkcja umożliwiająca zmianę częstotliwości wykonywanych pomiarów
     * @param czestotliwosc_pomiarow zmienna określająca co ile czasu mają wykonywać się pomiary [w minutach]
     */
    public void konfiguracja(int czestotliwosc_pomiarow){
        
    }
    /**
     * Funkcja do otwierania połączenia z siecią
     */
    public void polacz_z_siecia(){
        
    }
    /**
     * Funkcja obliczająca prognozę pogody
     * @param temperatura - tablica zawierająca pomiary temperatury z bazy danych
     * @param wilgotnosc - tablica zawierająca pomiary wilgotnosci z bazy danych
     */
    public void oblicz_prognoze(double [] temperatura, double [] wilgotnosc){
        
    }
    
    /**
     * Funkcja wyzwalająca pomiar w danym momencie
     */
    public void sterowanie_pomiarami(){
        
    }
    
    /**
     * Funkcja do testowania czujników
     * @return true, jeżeli test pozytywny lub false, jeśli negatywny
     */
    public boolean testuj_czujniki(){
        if(true)
            return true;
        else
            return false;
    }
    
    /**
     * Główna funkcja
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
    }
    
}
