
#ifndef ROUTETHREAD_H
#define	ROUTETHREAD_H

class RouteThread {
public:
    RouteThread();
    RouteThread(const RouteThread& orig);
    
    /**
     * Uruchamia wątek route
     */
    void run();
    
    /**
     * Wysyła wiadomość do robota o możliwym ruchu
     */
    void putValidMoveToRobotStack();
    
    /**
     * Zatrzymuje wątek route
     */
    void stop();
    virtual ~RouteThread();
private:

};

#endif	/* ROUTETHREAD_H */

