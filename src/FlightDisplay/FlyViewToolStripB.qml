
import QtQml.Models 2.12

import QGroundControl               1.0
import QGroundControl.Controls      1.0
import QGroundControl.FlightDisplay 1.0

ToolStrip {
    id:     _root
    title:  qsTr("")

    PlanViewToolStripActionList {
        id: flyViewToolStripActionList1
    }

    model: flyViewToolStripActionList1.model
}
