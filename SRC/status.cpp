//
// Created by a on 7/6/20.
//

#include "status.h"
char Status::arrStatus[3] = {'-','*','0'};

void Status::setStatus(status status) {
    m_status = arrStatus[status];
}
char Status::getStatus() {
    return m_status;
}