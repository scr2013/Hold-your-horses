/* 
 * File:   Main.h
 * Author: bylak
 *
 * Created on 15 grudzień 2013, 10:05
 */

#ifndef MAIN_H
#define	MAIN_H

class Main {
public:
    Main();
    Main(const Main& orig);
    
    /**
     * Inicializuje wątki
     */
    void init();
    
    /**
     * Czeka na zakończenie gry
     */
    void waitToEndGame();
    
    /**
     * Zatrzymuje grę
     */
    void stopGame();
    virtual ~Main();
private:

};

#endif	/* MAIN_H */

