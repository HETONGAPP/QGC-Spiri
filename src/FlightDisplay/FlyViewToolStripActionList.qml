/****************************************************************************
 *
 * (c) 2009-2020 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/

import QtQml.Models 2.12

import QGroundControl           1.0
import QGroundControl.Controls  1.0

ToolStripActionList {
    id: _root

    signal displayPreFlightChecklist
    property bool _trigger: false
    model: [
        ToolStripAction {
            text:           qsTr("Fly")
            iconSource:     "/qmlimages/PaperPlane.svg"
            onTriggered:    {
                if(mainWindow.currentView === 1)
                {
                    _trigger = true
                }
                else
                {
                    _trigger = (_trigger  ? false :true)
                }
                mainWindow.showFlyView()
            }
        },
        PreFlightCheckListShowAction { onTriggered: displayPreFlightChecklist() },
        GuidedActionTakeoff { visible: _trigger},
        GuidedActionLand { visible: _trigger},
        GuidedActionRTL { visible: _trigger},
        GuidedActionPause {visible: _trigger },
        GuidedActionActionList { visible: _trigger},
        ToolStripAction {
                    id:control
                    text:           qsTr("Release")
                    iconSource: "/res/land.svg"
                    enabled:            true
                    visible:            _trigger
                    checkable:          true
                    onTriggered:    {

                        //control.checked? control.checked = true:control.checked = false

                        control.checked? QGroundControl.multiVehicleManager.activeVehicle.requestAllParameters(1):QGroundControl.multiVehicleManager.activeVehicle.requestAllParameters(-1)
                    }
        }
    ]
}
