# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from pal_detection_msgs/FaceDetection.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import geometry_msgs.msg

class FaceDetection(genpy.Message):
  _md5sum = "6dcee331fa45e6aea891516390b9e96d"
  _type = "pal_detection_msgs/FaceDetection"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """
##########################################
#
# Face detection data
#
##########################################

#####################
# Face bounding box
#####################
# coordinates of the top left corner of the box
int32 x
int32 y

# width of the box
int32 width

# height of the box
int32 height

############################
# Eyes position (if found)
############################

bool eyesLocated

int32 leftEyeX
int32 leftEyeY
int32 rightEyeX
int32 rightEyeY

#############################
# Centre of eyes 3D estimate
#############################
geometry_msgs/Point32 position


############################
# Person recognition
############################

string name
float32 confidence

############################
# Gender recognition
############################
string gender
float32 genderConfidence

############################
# Facial expression
############################
string EXPRESSION_NEUTRAL="neutral"
string EXPRESSION_SMILE="smile"
string EXPRESSION_RAISED_BROWS="raised brows"
string EXPRESSION_EYES_AWAY="eyes away"
string EXPRESSION_SQUINTING="squinting"
string EXPRESSION_FROWNING="frowning"
string expression
float32 expression_confidence

############################
# Facial emotion
############################
float32 emotion_anger_confidence
float32 emotion_disgust_confidence
float32 emotion_fear_confidence
float32 emotion_happiness_confidence
float32 emotion_neutral_confidence
float32 emotion_sadness_confidence
float32 emotion_surprise_confidence

================================================================================
MSG: geometry_msgs/Point32
# This contains the position of a point in free space(with 32 bits of precision).
# It is recommeded to use Point wherever possible instead of Point32.  
# 
# This recommendation is to promote interoperability.  
#
# This message is designed to take up less space when sending
# lots of points at once, as in the case of a PointCloud.  

float32 x
float32 y
float32 z"""
  # Pseudo-constants
  EXPRESSION_NEUTRAL = r'"neutral"'
  EXPRESSION_SMILE = r'"smile"'
  EXPRESSION_RAISED_BROWS = r'"raised brows"'
  EXPRESSION_EYES_AWAY = r'"eyes away"'
  EXPRESSION_SQUINTING = r'"squinting"'
  EXPRESSION_FROWNING = r'"frowning"'

  __slots__ = ['x','y','width','height','eyesLocated','leftEyeX','leftEyeY','rightEyeX','rightEyeY','position','name','confidence','gender','genderConfidence','expression','expression_confidence','emotion_anger_confidence','emotion_disgust_confidence','emotion_fear_confidence','emotion_happiness_confidence','emotion_neutral_confidence','emotion_sadness_confidence','emotion_surprise_confidence']
  _slot_types = ['int32','int32','int32','int32','bool','int32','int32','int32','int32','geometry_msgs/Point32','string','float32','string','float32','string','float32','float32','float32','float32','float32','float32','float32','float32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       x,y,width,height,eyesLocated,leftEyeX,leftEyeY,rightEyeX,rightEyeY,position,name,confidence,gender,genderConfidence,expression,expression_confidence,emotion_anger_confidence,emotion_disgust_confidence,emotion_fear_confidence,emotion_happiness_confidence,emotion_neutral_confidence,emotion_sadness_confidence,emotion_surprise_confidence

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(FaceDetection, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.x is None:
        self.x = 0
      if self.y is None:
        self.y = 0
      if self.width is None:
        self.width = 0
      if self.height is None:
        self.height = 0
      if self.eyesLocated is None:
        self.eyesLocated = False
      if self.leftEyeX is None:
        self.leftEyeX = 0
      if self.leftEyeY is None:
        self.leftEyeY = 0
      if self.rightEyeX is None:
        self.rightEyeX = 0
      if self.rightEyeY is None:
        self.rightEyeY = 0
      if self.position is None:
        self.position = geometry_msgs.msg.Point32()
      if self.name is None:
        self.name = ''
      if self.confidence is None:
        self.confidence = 0.
      if self.gender is None:
        self.gender = ''
      if self.genderConfidence is None:
        self.genderConfidence = 0.
      if self.expression is None:
        self.expression = ''
      if self.expression_confidence is None:
        self.expression_confidence = 0.
      if self.emotion_anger_confidence is None:
        self.emotion_anger_confidence = 0.
      if self.emotion_disgust_confidence is None:
        self.emotion_disgust_confidence = 0.
      if self.emotion_fear_confidence is None:
        self.emotion_fear_confidence = 0.
      if self.emotion_happiness_confidence is None:
        self.emotion_happiness_confidence = 0.
      if self.emotion_neutral_confidence is None:
        self.emotion_neutral_confidence = 0.
      if self.emotion_sadness_confidence is None:
        self.emotion_sadness_confidence = 0.
      if self.emotion_surprise_confidence is None:
        self.emotion_surprise_confidence = 0.
    else:
      self.x = 0
      self.y = 0
      self.width = 0
      self.height = 0
      self.eyesLocated = False
      self.leftEyeX = 0
      self.leftEyeY = 0
      self.rightEyeX = 0
      self.rightEyeY = 0
      self.position = geometry_msgs.msg.Point32()
      self.name = ''
      self.confidence = 0.
      self.gender = ''
      self.genderConfidence = 0.
      self.expression = ''
      self.expression_confidence = 0.
      self.emotion_anger_confidence = 0.
      self.emotion_disgust_confidence = 0.
      self.emotion_fear_confidence = 0.
      self.emotion_happiness_confidence = 0.
      self.emotion_neutral_confidence = 0.
      self.emotion_sadness_confidence = 0.
      self.emotion_surprise_confidence = 0.

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_4iB4i3f().pack(_x.x, _x.y, _x.width, _x.height, _x.eyesLocated, _x.leftEyeX, _x.leftEyeY, _x.rightEyeX, _x.rightEyeY, _x.position.x, _x.position.y, _x.position.z))
      _x = self.name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      buff.write(_get_struct_f().pack(self.confidence))
      _x = self.gender
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      buff.write(_get_struct_f().pack(self.genderConfidence))
      _x = self.expression
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_8f().pack(_x.expression_confidence, _x.emotion_anger_confidence, _x.emotion_disgust_confidence, _x.emotion_fear_confidence, _x.emotion_happiness_confidence, _x.emotion_neutral_confidence, _x.emotion_sadness_confidence, _x.emotion_surprise_confidence))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.position is None:
        self.position = geometry_msgs.msg.Point32()
      end = 0
      _x = self
      start = end
      end += 45
      (_x.x, _x.y, _x.width, _x.height, _x.eyesLocated, _x.leftEyeX, _x.leftEyeY, _x.rightEyeX, _x.rightEyeY, _x.position.x, _x.position.y, _x.position.z,) = _get_struct_4iB4i3f().unpack(str[start:end])
      self.eyesLocated = bool(self.eyesLocated)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.name = str[start:end].decode('utf-8')
      else:
        self.name = str[start:end]
      start = end
      end += 4
      (self.confidence,) = _get_struct_f().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.gender = str[start:end].decode('utf-8')
      else:
        self.gender = str[start:end]
      start = end
      end += 4
      (self.genderConfidence,) = _get_struct_f().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.expression = str[start:end].decode('utf-8')
      else:
        self.expression = str[start:end]
      _x = self
      start = end
      end += 32
      (_x.expression_confidence, _x.emotion_anger_confidence, _x.emotion_disgust_confidence, _x.emotion_fear_confidence, _x.emotion_happiness_confidence, _x.emotion_neutral_confidence, _x.emotion_sadness_confidence, _x.emotion_surprise_confidence,) = _get_struct_8f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_4iB4i3f().pack(_x.x, _x.y, _x.width, _x.height, _x.eyesLocated, _x.leftEyeX, _x.leftEyeY, _x.rightEyeX, _x.rightEyeY, _x.position.x, _x.position.y, _x.position.z))
      _x = self.name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      buff.write(_get_struct_f().pack(self.confidence))
      _x = self.gender
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      buff.write(_get_struct_f().pack(self.genderConfidence))
      _x = self.expression
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_8f().pack(_x.expression_confidence, _x.emotion_anger_confidence, _x.emotion_disgust_confidence, _x.emotion_fear_confidence, _x.emotion_happiness_confidence, _x.emotion_neutral_confidence, _x.emotion_sadness_confidence, _x.emotion_surprise_confidence))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.position is None:
        self.position = geometry_msgs.msg.Point32()
      end = 0
      _x = self
      start = end
      end += 45
      (_x.x, _x.y, _x.width, _x.height, _x.eyesLocated, _x.leftEyeX, _x.leftEyeY, _x.rightEyeX, _x.rightEyeY, _x.position.x, _x.position.y, _x.position.z,) = _get_struct_4iB4i3f().unpack(str[start:end])
      self.eyesLocated = bool(self.eyesLocated)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.name = str[start:end].decode('utf-8')
      else:
        self.name = str[start:end]
      start = end
      end += 4
      (self.confidence,) = _get_struct_f().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.gender = str[start:end].decode('utf-8')
      else:
        self.gender = str[start:end]
      start = end
      end += 4
      (self.genderConfidence,) = _get_struct_f().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.expression = str[start:end].decode('utf-8')
      else:
        self.expression = str[start:end]
      _x = self
      start = end
      end += 32
      (_x.expression_confidence, _x.emotion_anger_confidence, _x.emotion_disgust_confidence, _x.emotion_fear_confidence, _x.emotion_happiness_confidence, _x.emotion_neutral_confidence, _x.emotion_sadness_confidence, _x.emotion_surprise_confidence,) = _get_struct_8f().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4iB4i3f = None
def _get_struct_4iB4i3f():
    global _struct_4iB4i3f
    if _struct_4iB4i3f is None:
        _struct_4iB4i3f = struct.Struct("<4iB4i3f")
    return _struct_4iB4i3f
_struct_8f = None
def _get_struct_8f():
    global _struct_8f
    if _struct_8f is None:
        _struct_8f = struct.Struct("<8f")
    return _struct_8f
_struct_f = None
def _get_struct_f():
    global _struct_f
    if _struct_f is None:
        _struct_f = struct.Struct("<f")
    return _struct_f
