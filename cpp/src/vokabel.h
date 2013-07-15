#ifndef VOKABEL_H
#define VOKABEL_H

#include "pch.h"

class Vokabel: public DQModel {
    DQ_MODEL
public:
    DQField<QString> language1;
    DQField<QString> language2;
    DQField<int> lektion;
    DQField<int> right;
    DQField<int> wrong;
};

DQ_DECLARE_MODEL(Vokabel,
                 "vokabel", // the table name.
                 DQ_FIELD(language1, DQNotNull),
                 DQ_FIELD(language2, DQNotNull),
                 DQ_FIELD(lektion, DQNotNull),
                 DQ_FIELD(right, DQNotNull),
                 DQ_FIELD(wrong, DQNotNull)
                 )

#endif // VOKABEL_H
