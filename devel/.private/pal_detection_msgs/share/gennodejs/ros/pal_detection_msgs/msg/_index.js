
"use strict";

let WaveDetection = require('./WaveDetection.js');
let RecognizedObject = require('./RecognizedObject.js');
let PersonDetection = require('./PersonDetection.js');
let RecognizedObjectArray = require('./RecognizedObjectArray.js');
let FaceDetection = require('./FaceDetection.js');
let FaceDetections = require('./FaceDetections.js');
let RecognizedActions = require('./RecognizedActions.js');
let PersonDetections = require('./PersonDetections.js');
let LegDetections = require('./LegDetections.js');
let RotatedDetection2d = require('./RotatedDetection2d.js');
let Gesture = require('./Gesture.js');
let Detections2d = require('./Detections2d.js');
let TexturedObjectDetection = require('./TexturedObjectDetection.js');
let Detection2d = require('./Detection2d.js');
let RecognizeObjectsAction = require('./RecognizeObjectsAction.js');
let RecognizeObjectsActionFeedback = require('./RecognizeObjectsActionFeedback.js');
let RecognizeObjectsFeedback = require('./RecognizeObjectsFeedback.js');
let RecognizeObjectsGoal = require('./RecognizeObjectsGoal.js');
let RecognizeObjectsActionGoal = require('./RecognizeObjectsActionGoal.js');
let RecognizeObjectsActionResult = require('./RecognizeObjectsActionResult.js');
let RecognizeObjectsResult = require('./RecognizeObjectsResult.js');

module.exports = {
  WaveDetection: WaveDetection,
  RecognizedObject: RecognizedObject,
  PersonDetection: PersonDetection,
  RecognizedObjectArray: RecognizedObjectArray,
  FaceDetection: FaceDetection,
  FaceDetections: FaceDetections,
  RecognizedActions: RecognizedActions,
  PersonDetections: PersonDetections,
  LegDetections: LegDetections,
  RotatedDetection2d: RotatedDetection2d,
  Gesture: Gesture,
  Detections2d: Detections2d,
  TexturedObjectDetection: TexturedObjectDetection,
  Detection2d: Detection2d,
  RecognizeObjectsAction: RecognizeObjectsAction,
  RecognizeObjectsActionFeedback: RecognizeObjectsActionFeedback,
  RecognizeObjectsFeedback: RecognizeObjectsFeedback,
  RecognizeObjectsGoal: RecognizeObjectsGoal,
  RecognizeObjectsActionGoal: RecognizeObjectsActionGoal,
  RecognizeObjectsActionResult: RecognizeObjectsActionResult,
  RecognizeObjectsResult: RecognizeObjectsResult,
};
