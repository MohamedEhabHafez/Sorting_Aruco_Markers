;; Auto-generated. Do not edit!


(when (boundp 'pal_navigation_msgs::JoyPriorityFeedback)
  (if (not (find-package "PAL_NAVIGATION_MSGS"))
    (make-package "PAL_NAVIGATION_MSGS"))
  (shadow 'JoyPriorityFeedback (find-package "PAL_NAVIGATION_MSGS")))
(unless (find-package "PAL_NAVIGATION_MSGS::JOYPRIORITYFEEDBACK")
  (make-package "PAL_NAVIGATION_MSGS::JOYPRIORITYFEEDBACK"))

(in-package "ROS")
;;//! \htmlinclude JoyPriorityFeedback.msg.html


(defclass pal_navigation_msgs::JoyPriorityFeedback
  :super ros::object
  :slots ())

(defmethod pal_navigation_msgs::JoyPriorityFeedback
  (:init
   (&key
    )
   (send-super :init)
   self)
  (:serialization-length
   ()
   (+
    0
    ))
  (:serialize
   (&optional strm)
   (let ((s (if strm strm
              (make-string-output-stream (send self :serialization-length)))))
     ;;
     (if (null strm) (get-output-stream-string s))))
  (:deserialize
   (buf &optional (ptr- 0))
   ;;
   self)
  )

(setf (get pal_navigation_msgs::JoyPriorityFeedback :md5sum-) "d41d8cd98f00b204e9800998ecf8427e")
(setf (get pal_navigation_msgs::JoyPriorityFeedback :datatype-) "pal_navigation_msgs/JoyPriorityFeedback")
(setf (get pal_navigation_msgs::JoyPriorityFeedback :definition-)
      "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======


")



(provide :pal_navigation_msgs/JoyPriorityFeedback "d41d8cd98f00b204e9800998ecf8427e")


