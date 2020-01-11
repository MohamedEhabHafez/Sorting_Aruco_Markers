
"use strict";

let SafetyZone = require('./SafetyZone.js')
let GetPOI = require('./GetPOI.js')
let FinalApproachPose = require('./FinalApproachPose.js')
let GetMapConfiguration = require('./GetMapConfiguration.js')
let SetSubMapFloor = require('./SetSubMapFloor.js')
let ListMaps = require('./ListMaps.js')
let GetSubMap = require('./GetSubMap.js')
let ChangeBuilding = require('./ChangeBuilding.js')
let SetPOI = require('./SetPOI.js')
let RenameMap = require('./RenameMap.js')
let SetMapConfiguration = require('./SetMapConfiguration.js')
let SaveMap = require('./SaveMap.js')
let DisableEmergency = require('./DisableEmergency.js')
let Acknowledgment = require('./Acknowledgment.js')
let VisualLocRecognize = require('./VisualLocRecognize.js')
let GetNodes = require('./GetNodes.js')

module.exports = {
  SafetyZone: SafetyZone,
  GetPOI: GetPOI,
  FinalApproachPose: FinalApproachPose,
  GetMapConfiguration: GetMapConfiguration,
  SetSubMapFloor: SetSubMapFloor,
  ListMaps: ListMaps,
  GetSubMap: GetSubMap,
  ChangeBuilding: ChangeBuilding,
  SetPOI: SetPOI,
  RenameMap: RenameMap,
  SetMapConfiguration: SetMapConfiguration,
  SaveMap: SaveMap,
  DisableEmergency: DisableEmergency,
  Acknowledgment: Acknowledgment,
  VisualLocRecognize: VisualLocRecognize,
  GetNodes: GetNodes,
};
