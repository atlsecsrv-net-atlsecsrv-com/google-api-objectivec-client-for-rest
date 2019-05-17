// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Firebase Cloud Messaging API (fcm/v1)
// Description:
//   FCM send API that provides a cross-platform messaging solution to reliably
//   deliver messages at no cost.
// Documentation:
//   https://firebase.google.com/docs/cloud-messaging

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRFirebaseCloudMessaging_AndroidConfig;
@class GTLRFirebaseCloudMessaging_AndroidConfig_Data;
@class GTLRFirebaseCloudMessaging_AndroidNotification;
@class GTLRFirebaseCloudMessaging_ApnsConfig;
@class GTLRFirebaseCloudMessaging_ApnsConfig_Headers;
@class GTLRFirebaseCloudMessaging_ApnsConfig_Payload;
@class GTLRFirebaseCloudMessaging_Message;
@class GTLRFirebaseCloudMessaging_Message_Data;
@class GTLRFirebaseCloudMessaging_Notification;
@class GTLRFirebaseCloudMessaging_WebpushConfig;
@class GTLRFirebaseCloudMessaging_WebpushConfig_Data;
@class GTLRFirebaseCloudMessaging_WebpushConfig_Headers;
@class GTLRFirebaseCloudMessaging_WebpushConfig_Notification;
@class GTLRFirebaseCloudMessaging_WebpushFcmOptions;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRFirebaseCloudMessaging_AndroidConfig.priority

/**
 *  Default priority for notification messages. FCM attempts to deliver high
 *  priority messages immediately, allowing the FCM service to wake a
 *  sleeping device when possible and open a network connection to your app
 *  server. Apps with instant messaging, chat, or voice call alerts, for
 *  example, generally need to open a network connection and make sure FCM
 *  delivers the message to the device without delay. Set high priority if
 *  the message is time-critical and requires the user's immediate
 *  interaction, but beware that setting your messages to high priority
 *  contributes more to battery drain compared with normal priority messages.
 *
 *  Value: "HIGH"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseCloudMessaging_AndroidConfig_Priority_High;
/**
 *  Default priority for data messages. Normal priority messages won't open
 *  network connections on a sleeping device, and their delivery may be
 *  delayed to conserve the battery. For less time-sensitive messages, such
 *  as notifications of new email or other data to sync, choose normal
 *  delivery priority.
 *
 *  Value: "NORMAL"
 */
GTLR_EXTERN NSString * const kGTLRFirebaseCloudMessaging_AndroidConfig_Priority_Normal;

/**
 *  Android specific options for messages sent through
 *  [FCM connection server](https://goo.gl/4GLdUl).
 */
@interface GTLRFirebaseCloudMessaging_AndroidConfig : GTLRObject

/**
 *  An identifier of a group of messages that can be collapsed, so that only
 *  the last message gets sent when delivery can be resumed. A maximum of 4
 *  different collapse keys is allowed at any given time.
 */
@property(nonatomic, copy, nullable) NSString *collapseKey;

/**
 *  Arbitrary key/value payload. If present, it will override
 *  google.firebase.fcm.v1.Message.data.
 */
@property(nonatomic, strong, nullable) GTLRFirebaseCloudMessaging_AndroidConfig_Data *data;

/** Notification to send to android devices. */
@property(nonatomic, strong, nullable) GTLRFirebaseCloudMessaging_AndroidNotification *notification;

/**
 *  Message priority. Can take "normal" and "high" values.
 *  For more information, see [Setting the priority of a
 *  message](https://goo.gl/GjONJv).
 *
 *  Likely values:
 *    @arg @c kGTLRFirebaseCloudMessaging_AndroidConfig_Priority_High Default
 *        priority for notification messages. FCM attempts to deliver high
 *        priority messages immediately, allowing the FCM service to wake a
 *        sleeping device when possible and open a network connection to your
 *        app
 *        server. Apps with instant messaging, chat, or voice call alerts, for
 *        example, generally need to open a network connection and make sure FCM
 *        delivers the message to the device without delay. Set high priority if
 *        the message is time-critical and requires the user's immediate
 *        interaction, but beware that setting your messages to high priority
 *        contributes more to battery drain compared with normal priority
 *        messages. (Value: "HIGH")
 *    @arg @c kGTLRFirebaseCloudMessaging_AndroidConfig_Priority_Normal Default
 *        priority for data messages. Normal priority messages won't open
 *        network connections on a sleeping device, and their delivery may be
 *        delayed to conserve the battery. For less time-sensitive messages,
 *        such
 *        as notifications of new email or other data to sync, choose normal
 *        delivery priority. (Value: "NORMAL")
 */
@property(nonatomic, copy, nullable) NSString *priority;

/**
 *  Package name of the application where the registration token must match in
 *  order to receive the message.
 */
@property(nonatomic, copy, nullable) NSString *restrictedPackageName;

/**
 *  How long (in seconds) the message should be kept in FCM storage if the
 *  device is offline. The maximum time to live supported is 4 weeks, and the
 *  default value is 4 weeks if not set. Set it to 0 if want to send the
 *  message immediately.
 *  In JSON format, the Duration type is encoded as a string rather than an
 *  object, where the string ends in the suffix "s" (indicating seconds) and
 *  is preceded by the number of seconds, with nanoseconds expressed as
 *  fractional seconds. For example, 3 seconds with 0 nanoseconds should be
 *  encoded in JSON format as "3s", while 3 seconds and 1 nanosecond should
 *  be expressed in JSON format as "3.000000001s". The ttl will be rounded down
 *  to the nearest second.
 */
@property(nonatomic, strong, nullable) GTLRDuration *ttl;

@end


/**
 *  Arbitrary key/value payload. If present, it will override
 *  google.firebase.fcm.v1.Message.data.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRFirebaseCloudMessaging_AndroidConfig_Data : GTLRObject
@end


/**
 *  Notification to send to android devices.
 */
@interface GTLRFirebaseCloudMessaging_AndroidNotification : GTLRObject

/**
 *  The notification's body text. If present, it will override
 *  google.firebase.fcm.v1.Notification.body.
 */
@property(nonatomic, copy, nullable) NSString *body;

/**
 *  Variable string values to be used in place of the format specifiers in
 *  body_loc_key to use to localize the body text to the user's current
 *  localization.
 *  See [Formatting and Styling](https://goo.gl/MalYE3) for more information.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *bodyLocArgs;

/**
 *  The key to the body string in the app's string resources to use to localize
 *  the body text to the user's current localization.
 *  See [String Resources](https://goo.gl/NdFZGI) for more information.
 */
@property(nonatomic, copy, nullable) NSString *bodyLocKey;

/**
 *  The [notification's channel
 *  id](https://developer.android.com/guide/topics/ui/notifiers/notifications#ManageChannels)
 *  (new in Android O). The app must create a channel with this channel ID
 *  before any notification with this channel ID is received. If you don't send
 *  this channel ID in the request, or if the channel ID provided has not yet
 *  been created by the app, FCM uses the channel ID specified in the app
 *  manifest.
 */
@property(nonatomic, copy, nullable) NSString *channelId;

/**
 *  The action associated with a user click on the notification.
 *  If specified, an activity with a matching intent filter is launched when
 *  a user clicks on the notification.
 */
@property(nonatomic, copy, nullable) NSString *clickAction;

/** The notification's icon color, expressed in #rrggbb format. */
@property(nonatomic, copy, nullable) NSString *color;

/**
 *  The notification's icon.
 *  Sets the notification icon to myicon for drawable resource myicon.
 *  If you don't send this key in the request, FCM displays the launcher icon
 *  specified in your app manifest.
 */
@property(nonatomic, copy, nullable) NSString *icon;

/**
 *  The sound to play when the device receives the notification.
 *  Supports "default" or the filename of a sound resource bundled in the app.
 *  Sound files must reside in /res/raw/.
 */
@property(nonatomic, copy, nullable) NSString *sound;

/**
 *  Identifier used to replace existing notifications in the notification
 *  drawer.
 *  If not specified, each request creates a new notification.
 *  If specified and a notification with the same tag is already being shown,
 *  the new notification replaces the existing one in the notification drawer.
 */
@property(nonatomic, copy, nullable) NSString *tag;

/**
 *  The notification's title. If present, it will override
 *  google.firebase.fcm.v1.Notification.title.
 */
@property(nonatomic, copy, nullable) NSString *title;

/**
 *  Variable string values to be used in place of the format specifiers in
 *  title_loc_key to use to localize the title text to the user's current
 *  localization.
 *  See [Formatting and Styling](https://goo.gl/MalYE3) for more information.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *titleLocArgs;

/**
 *  The key to the title string in the app's string resources to use to
 *  localize the title text to the user's current localization.
 *  See [String Resources](https://goo.gl/NdFZGI) for more information.
 */
@property(nonatomic, copy, nullable) NSString *titleLocKey;

@end


/**
 *  [Apple Push Notification Service](https://goo.gl/MXRTPa) specific options.
 */
@interface GTLRFirebaseCloudMessaging_ApnsConfig : GTLRObject

/**
 *  HTTP request headers defined in Apple Push Notification Service. Refer to
 *  [APNs request headers](https://goo.gl/C6Yhia) for
 *  supported headers, e.g. "apns-priority": "10".
 */
@property(nonatomic, strong, nullable) GTLRFirebaseCloudMessaging_ApnsConfig_Headers *headers;

/**
 *  APNs payload as a JSON object, including both `aps` dictionary and custom
 *  payload. See [Payload Key Reference](https://goo.gl/32Pl5W).
 *  If present, it overrides google.firebase.fcm.v1.Notification.title
 *  and google.firebase.fcm.v1.Notification.body.
 */
@property(nonatomic, strong, nullable) GTLRFirebaseCloudMessaging_ApnsConfig_Payload *payload;

@end


/**
 *  HTTP request headers defined in Apple Push Notification Service. Refer to
 *  [APNs request headers](https://goo.gl/C6Yhia) for
 *  supported headers, e.g. "apns-priority": "10".
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRFirebaseCloudMessaging_ApnsConfig_Headers : GTLRObject
@end


/**
 *  APNs payload as a JSON object, including both `aps` dictionary and custom
 *  payload. See [Payload Key Reference](https://goo.gl/32Pl5W).
 *  If present, it overrides google.firebase.fcm.v1.Notification.title
 *  and google.firebase.fcm.v1.Notification.body.
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRFirebaseCloudMessaging_ApnsConfig_Payload : GTLRObject
@end


/**
 *  Message to send by Firebase Cloud Messaging Service.
 */
@interface GTLRFirebaseCloudMessaging_Message : GTLRObject

/**
 *  Input only. Android specific options for messages sent through
 *  [FCM connection server](https://goo.gl/4GLdUl).
 */
@property(nonatomic, strong, nullable) GTLRFirebaseCloudMessaging_AndroidConfig *android;

/**
 *  Input only. [Apple Push Notification Service](https://goo.gl/MXRTPa)
 *  specific options.
 */
@property(nonatomic, strong, nullable) GTLRFirebaseCloudMessaging_ApnsConfig *apns;

/**
 *  Condition to send a message to,
 *  e.g. "'foo' in topics && 'bar' in topics".
 */
@property(nonatomic, copy, nullable) NSString *condition;

/** Input only. Arbitrary key/value payload. */
@property(nonatomic, strong, nullable) GTLRFirebaseCloudMessaging_Message_Data *data;

/**
 *  Output Only. The identifier of the message sent, in the format of
 *  `projects/ * /messages/{message_id}`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/** Input only. Basic notification template to use across all platforms. */
@property(nonatomic, strong, nullable) GTLRFirebaseCloudMessaging_Notification *notification;

/** Registration token to send a message to. */
@property(nonatomic, copy, nullable) NSString *token;

/**
 *  Topic name to send a message to, e.g. "weather".
 *  Note: "/topics/" prefix should not be provided.
 */
@property(nonatomic, copy, nullable) NSString *topic;

/**
 *  Input only. [Webpush protocol](https://tools.ietf.org/html/rfc8030)
 *  options.
 */
@property(nonatomic, strong, nullable) GTLRFirebaseCloudMessaging_WebpushConfig *webpush;

@end


/**
 *  Input only. Arbitrary key/value payload.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRFirebaseCloudMessaging_Message_Data : GTLRObject
@end


/**
 *  Basic notification template to use across all platforms.
 */
@interface GTLRFirebaseCloudMessaging_Notification : GTLRObject

/** The notification's body text. */
@property(nonatomic, copy, nullable) NSString *body;

/** The notification's title. */
@property(nonatomic, copy, nullable) NSString *title;

@end


/**
 *  Request to send a message to specified target.
 */
@interface GTLRFirebaseCloudMessaging_SendMessageRequest : GTLRObject

/** Required. Message to send. */
@property(nonatomic, strong, nullable) GTLRFirebaseCloudMessaging_Message *message;

/**
 *  Flag for testing the request without actually delivering the message.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *validateOnly;

@end


/**
 *  [Webpush protocol](https://tools.ietf.org/html/rfc8030) options.
 */
@interface GTLRFirebaseCloudMessaging_WebpushConfig : GTLRObject

/**
 *  Arbitrary key/value payload. If present, it will override
 *  google.firebase.fcm.v1.Message.data.
 */
@property(nonatomic, strong, nullable) GTLRFirebaseCloudMessaging_WebpushConfig_Data *data;

/** Options for features provided by the FCM SDK for Web. */
@property(nonatomic, strong, nullable) GTLRFirebaseCloudMessaging_WebpushFcmOptions *fcmOptions;

/**
 *  HTTP headers defined in webpush protocol. Refer to
 *  [Webpush protocol](https://tools.ietf.org/html/rfc8030#section-5) for
 *  supported headers, e.g. "TTL": "15".
 */
@property(nonatomic, strong, nullable) GTLRFirebaseCloudMessaging_WebpushConfig_Headers *headers;

/**
 *  Web Notification options as a JSON object. Supports Notification instance
 *  properties as defined in [Web Notification
 *  API](https://developer.mozilla.org/en-US/docs/Web/API/Notification). If
 *  present, "title" and "body" fields override
 *  [google.firebase.fcm.v1.Notification.title] and
 *  [google.firebase.fcm.v1.Notification.body].
 */
@property(nonatomic, strong, nullable) GTLRFirebaseCloudMessaging_WebpushConfig_Notification *notification;

@end


/**
 *  Arbitrary key/value payload. If present, it will override
 *  google.firebase.fcm.v1.Message.data.
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRFirebaseCloudMessaging_WebpushConfig_Data : GTLRObject
@end


/**
 *  HTTP headers defined in webpush protocol. Refer to
 *  [Webpush protocol](https://tools.ietf.org/html/rfc8030#section-5) for
 *  supported headers, e.g. "TTL": "15".
 *
 *  @note This class is documented as having more properties of NSString. Use @c
 *        -additionalJSONKeys and @c -additionalPropertyForName: to get the list
 *        of properties and then fetch them; or @c -additionalProperties to
 *        fetch them all at once.
 */
@interface GTLRFirebaseCloudMessaging_WebpushConfig_Headers : GTLRObject
@end


/**
 *  Web Notification options as a JSON object. Supports Notification instance
 *  properties as defined in [Web Notification
 *  API](https://developer.mozilla.org/en-US/docs/Web/API/Notification). If
 *  present, "title" and "body" fields override
 *  [google.firebase.fcm.v1.Notification.title] and
 *  [google.firebase.fcm.v1.Notification.body].
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRFirebaseCloudMessaging_WebpushConfig_Notification : GTLRObject
@end


/**
 *  Options for features provided by the FCM SDK for Web.
 */
@interface GTLRFirebaseCloudMessaging_WebpushFcmOptions : GTLRObject

/**
 *  The link to open when the user clicks on the notification.
 *  For all URL values, HTTPS is required.
 */
@property(nonatomic, copy, nullable) NSString *link;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
