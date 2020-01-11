
"use strict";

let Recognizer = require('./Recognizer.js')
let ChangeObjectRecognizerModel = require('./ChangeObjectRecognizerModel.js')
let AddTexturedObject = require('./AddTexturedObject.js')
let SelectTexturedObject = require('./SelectTexturedObject.js')
let StartEnrollment = require('./StartEnrollment.js')
let SetDatabase = require('./SetDatabase.js')
let StopEnrollment = require('./StopEnrollment.js')

module.exports = {
  Recognizer: Recognizer,
  ChangeObjectRecognizerModel: ChangeObjectRecognizerModel,
  AddTexturedObject: AddTexturedObject,
  SelectTexturedObject: SelectTexturedObject,
  StartEnrollment: StartEnrollment,
  SetDatabase: SetDatabase,
  StopEnrollment: StopEnrollment,
};
