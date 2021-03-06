/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "VDBPhoneNumberIndexFault.h"

@class NSString, RACDisposable, RACSubject, VDBContact;

@interface VDBPhoneNumberIndex : VDBPhoneNumberIndexFault
{
    BOOL _isOnlyInWatchedVibes;
    RACSubject *_updates;
    RACDisposable *_contactUpdatesSubscription;
    BOOL _isViber;
    BOOL _isBlocked;
    BOOL _isSystem;
    NSString *_phoneNum;
    NSString *_canonizedPhoneNum;
    NSString *_viberName;
    NSString *_iconID;
    NSString *_iconState;
    VDBContact *_contact;
//    id <FICEntity> _iconCacheEntity;
}

+ (id)changedKeysForManagedObjectChangedKeyPaths:(id)arg1;
+ (id)phoneNumberIndexWithManagedPhoneNumberIndex:(id)arg1;
+ (id)phoneNumberIndexWithPhoneLibVibeUserDetails:(id)arg1;
+ (id)managedObjectKeysByPropertyKey;
+ (id)relationshipModelClassesByPropertyKey;
//@property(readonly, nonatomic) id <FICEntity> iconCacheEntity; // @synthesize iconCacheEntity=_iconCacheEntity;
@property(retain, nonatomic) VDBContact *contact; // @synthesize contact=_contact;
@property(nonatomic) BOOL isSystem; // @synthesize isSystem=_isSystem;
@property(nonatomic) BOOL isBlocked; // @synthesize isBlocked=_isBlocked;
@property(nonatomic) BOOL isViber; // @synthesize isViber=_isViber;
@property(copy, nonatomic) NSString *iconState; // @synthesize iconState=_iconState;
@property(copy, nonatomic) NSString *iconID; // @synthesize iconID=_iconID;
@property(copy, nonatomic) NSString *viberName; // @synthesize viberName=_viberName;
@property(copy, nonatomic) NSString *canonizedPhoneNum; // @synthesize canonizedPhoneNum=_canonizedPhoneNum;
@property(copy, nonatomic) NSString *phoneNum; // @synthesize phoneNum=_phoneNum;
//- (void).cxx_destruct;
- (id)accessibleName;
- (id)accessibleShortName;
- (id)shortName;
- (BOOL)findUID;
- (void)obtainUID;
- (id)shortNameWithOverrideDirection:(BOOL)arg1;
- (id)nameWithOverrideDirection:(BOOL)arg1;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSString *displayName;
- (void)setNilValueForKey:(id)arg1;
- (void)didCompleteDeserializationFromManagedObject:(id)arg1;
- (void)updateContactSubscription;
- (id)updates;

@end

