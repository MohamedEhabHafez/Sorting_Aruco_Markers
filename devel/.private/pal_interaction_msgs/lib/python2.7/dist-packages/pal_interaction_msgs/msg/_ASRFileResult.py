# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from pal_interaction_msgs/ASRFileResult.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import pal_interaction_msgs.msg
import genpy

class ASRFileResult(genpy.Message):
  _md5sum = "f039521e38adb20a017037121dedb1d4"
  _type = "pal_interaction_msgs/ASRFileResult"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======
##result definition
# same path as specified in goal variable file
string file
# error/warning messages 
string msg
# vector of results
asrresult[] recognised_utterances

================================================================================
MSG: pal_interaction_msgs/asrresult
## Message that containes the recognized utterance.
## Confidence values
int8 CONFIDENCE_UNDEFINED = -1
int8 CONFIDENCE_POOR = 1
int8 CONFIDENCE_LOW  = 2
int8 CONFIDENCE_GOOD = 3
int8 CONFIDENCE_MAX  = 4

# ASR result messages used by RosRecognizerServer

# text recognized
string text

# confidence with values from POOR to MAX
int8 confidence

# start and end of the recognizer uterance.
time start
time end

# list of recognized tags
# key value pairs of strings extracted from the text
# given the action tags placed in the grammar.
actiontag[] tags

================================================================================
MSG: pal_interaction_msgs/actiontag
# Action tag contaings the key/value information genertated by parsing the recognised text with a JSGF grammar 

string key
string value"""
  __slots__ = ['file','msg','recognised_utterances']
  _slot_types = ['string','string','pal_interaction_msgs/asrresult[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       file,msg,recognised_utterances

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ASRFileResult, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.file is None:
        self.file = ''
      if self.msg is None:
        self.msg = ''
      if self.recognised_utterances is None:
        self.recognised_utterances = []
    else:
      self.file = ''
      self.msg = ''
      self.recognised_utterances = []

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
      _x = self.file
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.msg
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.recognised_utterances)
      buff.write(_struct_I.pack(length))
      for val1 in self.recognised_utterances:
        _x = val1.text
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_get_struct_b().pack(val1.confidence))
        _v1 = val1.start
        _x = _v1
        buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
        _v2 = val1.end
        _x = _v2
        buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
        length = len(val1.tags)
        buff.write(_struct_I.pack(length))
        for val2 in val1.tags:
          _x = val2.key
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.pack('<I%ss'%length, length, _x))
          _x = val2.value
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.recognised_utterances is None:
        self.recognised_utterances = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.file = str[start:end].decode('utf-8')
      else:
        self.file = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.msg = str[start:end].decode('utf-8')
      else:
        self.msg = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.recognised_utterances = []
      for i in range(0, length):
        val1 = pal_interaction_msgs.msg.asrresult()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.text = str[start:end].decode('utf-8')
        else:
          val1.text = str[start:end]
        start = end
        end += 1
        (val1.confidence,) = _get_struct_b().unpack(str[start:end])
        _v3 = val1.start
        _x = _v3
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
        _v4 = val1.end
        _x = _v4
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.tags = []
        for i in range(0, length):
          val2 = pal_interaction_msgs.msg.actiontag()
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2.key = str[start:end].decode('utf-8')
          else:
            val2.key = str[start:end]
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2.value = str[start:end].decode('utf-8')
          else:
            val2.value = str[start:end]
          val1.tags.append(val2)
        self.recognised_utterances.append(val1)
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
      _x = self.file
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.msg
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.recognised_utterances)
      buff.write(_struct_I.pack(length))
      for val1 in self.recognised_utterances:
        _x = val1.text
        length = len(_x)
        if python3 or type(_x) == unicode:
          _x = _x.encode('utf-8')
          length = len(_x)
        buff.write(struct.pack('<I%ss'%length, length, _x))
        buff.write(_get_struct_b().pack(val1.confidence))
        _v5 = val1.start
        _x = _v5
        buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
        _v6 = val1.end
        _x = _v6
        buff.write(_get_struct_2I().pack(_x.secs, _x.nsecs))
        length = len(val1.tags)
        buff.write(_struct_I.pack(length))
        for val2 in val1.tags:
          _x = val2.key
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.pack('<I%ss'%length, length, _x))
          _x = val2.value
          length = len(_x)
          if python3 or type(_x) == unicode:
            _x = _x.encode('utf-8')
            length = len(_x)
          buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.recognised_utterances is None:
        self.recognised_utterances = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.file = str[start:end].decode('utf-8')
      else:
        self.file = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.msg = str[start:end].decode('utf-8')
      else:
        self.msg = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.recognised_utterances = []
      for i in range(0, length):
        val1 = pal_interaction_msgs.msg.asrresult()
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        start = end
        end += length
        if python3:
          val1.text = str[start:end].decode('utf-8')
        else:
          val1.text = str[start:end]
        start = end
        end += 1
        (val1.confidence,) = _get_struct_b().unpack(str[start:end])
        _v7 = val1.start
        _x = _v7
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
        _v8 = val1.end
        _x = _v8
        start = end
        end += 8
        (_x.secs, _x.nsecs,) = _get_struct_2I().unpack(str[start:end])
        start = end
        end += 4
        (length,) = _struct_I.unpack(str[start:end])
        val1.tags = []
        for i in range(0, length):
          val2 = pal_interaction_msgs.msg.actiontag()
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2.key = str[start:end].decode('utf-8')
          else:
            val2.key = str[start:end]
          start = end
          end += 4
          (length,) = _struct_I.unpack(str[start:end])
          start = end
          end += length
          if python3:
            val2.value = str[start:end].decode('utf-8')
          else:
            val2.value = str[start:end]
          val1.tags.append(val2)
        self.recognised_utterances.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_b = None
def _get_struct_b():
    global _struct_b
    if _struct_b is None:
        _struct_b = struct.Struct("<b")
    return _struct_b
_struct_2I = None
def _get_struct_2I():
    global _struct_2I
    if _struct_2I is None:
        _struct_2I = struct.Struct("<2I")
    return _struct_2I