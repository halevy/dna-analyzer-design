//
// Created by a on 7/6/20.
//

#ifndef SRC_STATUS_H
#define SRC_STATUS_H
typedef enum{
    E_connected_and_not_manipulated,
    E_connected_and_manipulated,
    E_not_connected
}status;
class Status{
private:
    char m_status;
    static char arrStatus[3];
public:
    void setStatus(status status);
    char getStatus();
};
#endif //SRC_STATUS_H
