/* 
 * File:   EnvironmentImpl.h
 *
 * Created on 28 listopad 2013, 20:53
 */

#ifndef ENVIRONMENTIMPL_H
#define	ENVIRONMENTIMPL_H

class EnvironmentImpl {
public:
    EnvironmentImpl();
    EnvironmentImpl(const EnvironmentImpl& orig);
    void run();
    void stop();

    virtual ~EnvironmentImpl();
private:

};

#endif	/* ENVIRONMENTIMPL_H */

