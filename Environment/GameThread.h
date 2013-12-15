#ifndef GAMETHREAD_H
#define	GAMETHREAD_H

class GameThread {
public:
    GameThread();
    GameThread(const GameThread& orig);
    /**
     * Uruchamia wątek gry
     */
    void run();
    
    /**
     * Rysuje mape wraz z agentami i robotem (w kosoli)
     */
    void printBoard();
    
    /**
     * Wykrywa kolizję robota z agentami
     */
    void detectColision();
    
    /**
     * Metoda sprawdza czy jest koniec gry
     */
    void isEndOfTheGame();
    
    /**
     * Zlicza zebrane przez robota cukierki
     */
    void countSweets();
    
    /**
     * Pobiera wiadomość od serwera. 
     */
    void getMessageFromStock();
    
    /**
     * Procesuje otrzymaną wiadomość
     */
    void processMessage();
    
    virtual ~GameThread();
private:

};

#endif	/* GAMETHREAD_H */

