# generated from rosidl_generator_py/resource/_idl.py.em
# with input from battery_interfaces:srv/BatteryStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_BatteryStatus_Request(type):
    """Metaclass of message 'BatteryStatus_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('battery_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'battery_interfaces.srv.BatteryStatus_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__battery_status__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__battery_status__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__battery_status__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__battery_status__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__battery_status__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BatteryStatus_Request(metaclass=Metaclass_BatteryStatus_Request):
    """Message class 'BatteryStatus_Request'."""

    __slots__ = [
        '_led_number',
        '_state',
    ]

    _fields_and_field_types = {
        'led_number': 'int64',
        'state': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.led_number = kwargs.get('led_number', int())
        self.state = kwargs.get('state', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.led_number != other.led_number:
            return False
        if self.state != other.state:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def led_number(self):
        """Message field 'led_number'."""
        return self._led_number

    @led_number.setter
    def led_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'led_number' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'led_number' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._led_number = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'state' field must be of type 'bool'"
        self._state = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_BatteryStatus_Response(type):
    """Metaclass of message 'BatteryStatus_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('battery_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'battery_interfaces.srv.BatteryStatus_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__battery_status__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__battery_status__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__battery_status__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__battery_status__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__battery_status__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class BatteryStatus_Response(metaclass=Metaclass_BatteryStatus_Response):
    """Message class 'BatteryStatus_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_BatteryStatus(type):
    """Metaclass of service 'BatteryStatus'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('battery_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'battery_interfaces.srv.BatteryStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__battery_status

            from battery_interfaces.srv import _battery_status
            if _battery_status.Metaclass_BatteryStatus_Request._TYPE_SUPPORT is None:
                _battery_status.Metaclass_BatteryStatus_Request.__import_type_support__()
            if _battery_status.Metaclass_BatteryStatus_Response._TYPE_SUPPORT is None:
                _battery_status.Metaclass_BatteryStatus_Response.__import_type_support__()


class BatteryStatus(metaclass=Metaclass_BatteryStatus):
    from battery_interfaces.srv._battery_status import BatteryStatus_Request as Request
    from battery_interfaces.srv._battery_status import BatteryStatus_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
