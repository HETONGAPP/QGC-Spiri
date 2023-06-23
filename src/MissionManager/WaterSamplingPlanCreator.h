#pragma once

#include "PlanCreator.h"

class WaterSamplingPlanCreator : public PlanCreator
{
    Q_OBJECT

public:
    WaterSamplingPlanCreator(PlanMasterController* planMasterController, QObject* parent = nullptr);

    Q_INVOKABLE void createPlan(const QGeoCoordinate& mapCenterCoord) final;
};
