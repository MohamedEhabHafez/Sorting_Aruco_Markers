# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from pal_detection_msgs/RecognizeObjectsResult.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import pal_detection_msgs.msg
import std_msgs.msg
import sensor_msgs.msg

class RecognizeObjectsResult(genpy.Message):
  _md5sum = "bcbaf988f66109a3344efd678c9c5f28"
  _type = "pal_detection_msgs/RecognizeObjectsResult"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
# image: The resultant image with recognized objects
sensor_msgs/CompressedImage image

# num_detections: The number of detected objects
int16 num_detections

# Send the found objects, see the msg files for docs
pal_detection_msgs/RecognizedObjectArray recognized_objects

================================================================================
MSG: sensor_msgs/CompressedImage
# This message contains a compressed image

Header header        # Header timestamp should be acquisition time of image
                     # Header frame_id should be optical frame of camera
                     # origin of frame should be optical center of camera
                     # +x should point to the right in the image
                     # +y should point down in the image
                     # +z should point into to plane of the image

string format        # Specifies the format of the data
                     #   Acceptable values:
                     #     jpeg, png
uint8[] data         # Compressed image buffer

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: pal_detection_msgs/RecognizedObjectArray
Header header

# This message type describes a potential scene configuration: a set of objects that can explain the scene
pal_detection_msgs/RecognizedObject[] objects

================================================================================
MSG: pal_detection_msgs/RecognizedObject
# Contains information about the class of a found object, along with its confidence and ROI of detection

# class: The respective class type of the found object
string object_class

# confidence: how sure you are it is that object and not another one.
# It is between 0 and 1 and the closer to one it is the better
float32 confidence

# bounding_box: The region of the image, where the object is found
sensor_msgs/RegionOfInterest bounding_box

================================================================================
MSG: sensor_msgs/RegionOfInterest
# This message is used to specify a region of interest within an image.
#
# When used to specify the ROI setting of the camera when the image was
# taken, the height and width fields should either match the height and
# width fields for the associated image; or height = width = 0
# indicates that the full resolution image was captured.

uint32 x_offset  # Leftmost pixel of the ROI
                 # (0 if the ROI includes the left edge of the image)
uint32 y_offset  # Topmost pixel of the ROI
                 # (0 if the ROI includes the top edge of the image)
uint32 height    # Height of ROI
uint32 width     # Width of ROI

# True if a distinct rectified ROI should be calculated from the "raw"
# ROI in this message. Typically this should be False if the full image
# is captured (ROI not used), and True if a subwindow is captured (ROI
# used).
bool do_rectify
"""
  __slots__ = ['image','num_detections','recognized_objects']
  _slot_types = ['sensor_msgs/CompressedImage','int16','pal_detection_msgs/RecognizedObjectArray']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       image,num_detections,recognized_objects

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(RecognizeObjectsResult, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.image is None:
        self.image = sensor_msgs.msg.CompressedImage()
      if self.num_detections is None:
        self.num_detections = 0
      if self.recognized_objects is None:
        self.recognized_objects = pal_detection_msgs.msg.RecognizedObjectArray()
    else:
      self.image = sensor_msgs.msg.CompressedImage()
      self.num_detections = 0
      self.recognized_objects = pal_detection_msgs.msg.RecognizedObjectArray()

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
      buff.write(_get_struct_3I().pack(_x.image.header.seq, _x.image.header.stamp.secs, _x.image.header.stamp.nsecs))
      _x = self.image.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.image.format
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.image.data
      length = len(_x)
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_h3I().pack(_x.num_detections, _x.recognized_objects.header.seq, _x.recognized_objects.header.stamp.secs, _x.recognized_objects.header.stamp.nsecs))
      _x = self.recognized_objects.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.recognized_objects.objects)
      buff.write(_struct_I.pack(length))
      for val1 in self.recognized_objects.objects:
        _x = val1.object_class
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_get_struct_f().pack(val1.confidence))
        _v1 = val1.bounding_box
        _x = _v1
        buff.write(_get_struct_4IB().pack(_x.x_offset, _x.y_offset, _x.height, _x.width, _x.do_rectify))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.image is None:
        self.image = sensor_msgs.msg.CompressedImage()
      if self.recognized_objects is None:
        self.recognized_objects = pal_detection_msgs.msg.RecognizedObjectArray()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.image.header.seq, _x.image.header.stamp.secs, _x.image.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.image.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.image.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.image.format = str[start:end].decode('utf-8')
      else:
        self.image.format = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.image.data = str[start:end]
      _x = self
      start = end
      end += 14
      (_x.num_detections, _x.recognized_objects.header.seq, _x.recognized_objects.header.stamp.secs, _x.recognized_objects.header.stamp.nsecs,) = _get_struct_h3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.recognized_objects.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.recognized_objects.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.recognized_objects.objects = []
      for i in range(0, length):
        val1 = pal_detection_msgs.msg.RecognizedObject()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.object_class = str[start:end].decode('utf-8')
        else:
          val1.object_class = str[start:end]
        start = end
        end += 4
        (val1.confidence,) = _get_struct_f().unpack(str[start:end])
        _v2 = val1.bounding_box
        _x = _v2
        start = end
        end += 17
        (_x.x_offset, _x.y_offset, _x.height, _x.width, _x.do_rectify,) = _get_struct_4IB().unpack(str[start:end])
        _v2.do_rectify = bool(_v2.do_rectify)
        self.recognized_objects.objects.append(val1)
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
      buff.write(_get_struct_3I().pack(_x.image.header.seq, _x.image.header.stamp.secs, _x.image.header.stamp.nsecs))
      _x = self.image.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.image.format
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.image.data
      length = len(_x)
      # - if encoded as a list instead, serialize as bytes instead of string
      if type(_x) in [list, tuple]:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self
      buff.write(_get_struct_h3I().pack(_x.num_detections, _x.recognized_objects.header.seq, _x.recognized_objects.header.stamp.secs, _x.recognized_objects.header.stamp.nsecs))
      _x = self.recognized_objects.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.recognized_objects.objects)
      buff.write(_struct_I.pack(length))
      for val1 in self.recognized_objects.objects:
        _x = val1.object_class
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_get_struct_f().pack(val1.confidence))
        _v3 = val1.bounding_box
        _x = _v3
        buff.write(_get_struct_4IB().pack(_x.x_offset, _x.y_offset, _x.height, _x.width, _x.do_rectify))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.image is None:
        self.image = sensor_msgs.msg.CompressedImage()
      if self.recognized_objects is None:
        self.recognized_objects = pal_detection_msgs.msg.RecognizedObjectArray()
      end = 0
      _x = self
      start = end
      end += 12
      (_x.image.header.seq, _x.image.header.stamp.secs, _x.image.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.image.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.image.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.image.format = str[start:end].decode('utf-8')
      else:
        self.image.format = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      self.image.data = str[start:end]
      _x = self
      start = end
      end += 14
      (_x.num_detections, _x.recognized_objects.header.seq, _x.recognized_objects.header.stamp.secs, _x.recognized_objects.header.stamp.nsecs,) = _get_struct_h3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.recognized_objects.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.recognized_objects.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.recognized_objects.objects = []
      for i in range(0, length):
        val1 = pal_detection_msgs.msg.RecognizedObject()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.object_class = str[start:end].decode('utf-8')
        else:
          val1.object_class = str[start:end]
        start = end
        end += 4
        (val1.confidence,) = _get_struct_f().unpack(str[start:end])
        _v4 = val1.bounding_box
        _x = _v4
        start = end
        end += 17
        (_x.x_offset, _x.y_offset, _x.height, _x.width, _x.do_rectify,) = _get_struct_4IB().unpack(str[start:end])
        _v4.do_rectify = bool(_v4.do_rectify)
        self.recognized_objects.objects.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_h3I = None
def _get_struct_h3I():
    global _struct_h3I
    if _struct_h3I is None:
        _struct_h3I = struct.Struct("<h3I")
    return _struct_h3I
_struct_4IB = None
def _get_struct_4IB():
    global _struct_4IB
    if _struct_4IB is None:
        _struct_4IB = struct.Struct("<4IB")
    return _struct_4IB
_struct_f = None
def _get_struct_f():
    global _struct_f
    if _struct_f is None:
        _struct_f = struct.Struct("<f")
    return _struct_f
