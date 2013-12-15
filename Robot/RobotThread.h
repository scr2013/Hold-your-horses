
#ifndef ROBOT_H
#define	ROBOT_H

class Robot {
public:
    Robot();
    Robot(const Robot& orig);
    
    /**
     * Uruchamia wątek robota
     */
    void run();
    
    /**
     * Pobiera wiadomość ze stosu
     */
    void getMessageFromStack();
    
    /**
     * Przetwarza wiadomość ze stosu
     */
    void processMessage();
    
    /**
     * Wysyłą wiadomość do clienta
     */
    void putMessageToClient();
    
    /**
     * Pobiera aktualną mapę świata
     */
    void getMap();
    
    /**
     * Zatrzymuje wątek
     */
    void stop();
    virtual ~Robot();
private:

};

#endif	/* ROBOT_H */

