// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Recommendations AI (recommendationengine/v1beta1)
// Description:
//   Recommendations AI service enables customers to build end-to-end
//   personalized recommendation systems without requiring a high level of
//   expertise in machine learning, recommendation system, or Google Cloud.
// Documentation:
//   https://cloud.google.com/recommendations/docs/

#import "GTLRRecommendationsAI.h"

// ----------------------------------------------------------------------------
// Authorization scope

NSString * const kGTLRAuthScopeRecommendationsAICloudPlatform = @"https://www.googleapis.com/auth/cloud-platform";

// ----------------------------------------------------------------------------
//   GTLRRecommendationsAIService
//

@implementation GTLRRecommendationsAIService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://recommendationengine.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end
