

#ifndef AGENTTHREAD_H
#define	AGENTTHREAD_H

class AgentThread {
public:
    AgentThread();
    AgentThread(const AgentThread& orig);
    
    /**
     * Uruchamia wątek agentów
     */
    void run();
    
    /**
     * Losuje pozycję agentów
     */
    void generateAgentsPositions();
    
    /**
     * Wykonuje ruch agentami (każdym)
     */
    void moveAgents();
    
    /**
     * Pobiera możliwy kierunek ruchu agenta
     */
    void getValidDirectionForAgent();
    
    
    virtual ~AgentThread();
private:

};

#endif	/* AGENTTHREAD_H */

