
#include "WaterSamplingPlanCreator.h"
#include "PlanMasterController.h"
#include "MissionSettingsItem.h"
#include "FixedWingLandingComplexItem.h"

WaterSamplingPlanCreator::WaterSamplingPlanCreator(PlanMasterController* planMasterController, QObject* parent)
    : PlanCreator(planMasterController, tr("Water Sampling"), QStringLiteral("/qmlimages/PlanCreator/BlankPlanCreator.png"), parent)
{

}

void WaterSamplingPlanCreator::createPlan(const QGeoCoordinate& mapCenterCoord)
{
    _planMasterController->removeAll();
    VisualMissionItem* takeoffItem = _missionController->insertTakeoffItem(mapCenterCoord, -1);
    _missionController->insertSimpleMissionItem(mapCenterCoord, -1);
    //_missionController->insertComplexMissionItem(SurveyComplexItem::name, mapCenterCoord, -1);
    _missionController->insertLandItem(mapCenterCoord, -1);
    _missionController->setCurrentPlanViewSeqNum(takeoffItem->sequenceNumber(), true);
}
