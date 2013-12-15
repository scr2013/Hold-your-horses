#ifndef CLIENT_H
#define	CLIENT_H

class Client {
public:
    Client();
    Client(const Client& orig);
    
      /**
     * Uruchamia serwer komunikacji z robotem
     */
    void run();
    
    /**
     * Nawiązuje połączenie z robotem
     */
    void getConnection();
    
    /**
     * Wysyła wiadomość do serwera
     */
    void sendMessageToServer();
    
    /**
     * Wysyła wiadomość do wątku gry, który odpowiednio reaguje na nią
     */
    void putMessageToRobot();
    
    /**
     * Zatrzymuje serwer komunikacji
     */
    void stopServer();
    
    virtual ~Client();
private:

};

#endif	/* CLIENT_H */

