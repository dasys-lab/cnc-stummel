#include "ConstraintCreator.h"

#include "constraints/StummelMaster1571241152555Constraints.h"
#include "Exploration/constraints/Explore1571241166731Constraints.h"
#include "Behaviours/constraints/Stop1571238310927Constraints.h"
#include "Behaviours/constraints/DriveToLab1573055161416Constraints.h"
#include "Behaviours/constraints/DriveToKitchen1573055193593Constraints.h"
#include "Behaviours/constraints/DriveToHallway1573055349775Constraints.h"
#include "Behaviours/constraints/DriveToOffices1573055365185Constraints.h"

#include <iostream>

using namespace alicaAutogenerated;

namespace alica
{

    ConstraintCreator::ConstraintCreator()
    {
    }

    ConstraintCreator::~ConstraintCreator()
    {
    }


    shared_ptr<BasicConstraint> ConstraintCreator::createConstraint(long constraintConfId)
    {
        switch(constraintConfId)
        {
            default:
            std::cerr << "ConstraintCreator: Unknown constraint requested: " << constraintConfId << std::endl;
            throw new std::exception();
            break;
        }
    }


}
