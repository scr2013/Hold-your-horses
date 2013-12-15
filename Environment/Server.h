
#ifndef SERVER_H
#define	SERVER_H

class Server {
public:
    Server();
    Server(const Server& orig);
    /**
     * Uruchamia serwer komunikacji z robotem
     */
    void run();
    
    /**
     * Nawiązuje połączenie z robotem
     */
    void getConnection();
    
    /**
     * Wysyła wiadomość do robota
     */
    void sendMessageToRobot();
    
    /**
     * Wysyła wiadomość do wątku gry, któ¶a odpowiednio reaguje na nią
     */
    void putMessageToGameThread();
    
    /**
     * Zatrzymuje serwer komunikacji
     */
    void stopServer();
    
    
    
    virtual ~Server();
private:

};

#endif	/* SERVER_H */

