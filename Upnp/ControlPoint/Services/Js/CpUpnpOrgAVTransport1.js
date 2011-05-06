 

/**
* Service Proxy for CpProxySchemasUpnpOrgAVTransport1
* @module Zapp
* @class AVTransport
*/
	
var CpProxySchemasUpnpOrgAVTransport1 = function(udn){	

	this.url = window.location.protocol + "//" + window.location.host + "/" + udn + "/upnp.org-AVTransport-1/control";  // upnp control url
	this.domain = "schemas-upnp-org";
	this.type = "AVTransport";
	this.version = "1";
	this.serviceName = "upnp.org-AVTransport-1";
	this.subscriptionId = "";  // Subscription identifier unique to each Subscription Manager 
	this.udn = udn;   // device name
	
	// Collection of service properties
	this.serviceProperties = {};
	this.serviceProperties["LastChange"] = new Zapp.ServiceProperty("LastChange","string");
}



/**
* Subscribes the service to the subscription manager to listen for property change events
* @method Subscribe
* @param {Function} serviceAddedFunction The function that executes once the subscription is successful
*/
CpProxySchemasUpnpOrgAVTransport1.prototype.subscribe = function (serviceAddedFunction) {
    Zapp.SubscriptionManager.addService(this,serviceAddedFunction);
}


/**
* Unsubscribes the service from the subscription manager to stop listening for property change events
* @method Unsubscribe
*/
CpProxySchemasUpnpOrgAVTransport1.prototype.unsubscribe = function () {
    Zapp.SubscriptionManager.removeService(this.subscriptionId);
}


	

/**
* Adds a listener to handle "LastChange" property change events
* @method LastChange_Changed
* @param {Function} stateChangedFunction The handler for state changes
*/
CpProxySchemasUpnpOrgAVTransport1.prototype.LastChange_Changed = function (stateChangedFunction) {
    this.serviceProperties.LastChange.addListener(function (state) 
	{ 
		stateChangedFunction(Zapp.SoapRequest.readStringParameter(state)); 
	});
}


/**
* A service action to SetAVTransportURI
* @method SetAVTransportURI
* @param {Int} InstanceID An action parameter
* @param {String} CurrentURI An action parameter
* @param {String} CurrentURIMetaData An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxySchemasUpnpOrgAVTransport1.prototype.SetAVTransportURI = function(InstanceID, CurrentURI, CurrentURIMetaData, successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("SetAVTransportURI", this.url, this.domain, this.type, this.version);		
    request.writeIntParameter("InstanceID", InstanceID);
    request.writeStringParameter("CurrentURI", CurrentURI);
    request.writeStringParameter("CurrentURIMetaData", CurrentURIMetaData);
    request.send(function(result){
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to SetNextAVTransportURI
* @method SetNextAVTransportURI
* @param {Int} InstanceID An action parameter
* @param {String} NextURI An action parameter
* @param {String} NextURIMetaData An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxySchemasUpnpOrgAVTransport1.prototype.SetNextAVTransportURI = function(InstanceID, NextURI, NextURIMetaData, successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("SetNextAVTransportURI", this.url, this.domain, this.type, this.version);		
    request.writeIntParameter("InstanceID", InstanceID);
    request.writeStringParameter("NextURI", NextURI);
    request.writeStringParameter("NextURIMetaData", NextURIMetaData);
    request.send(function(result){
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to GetMediaInfo
* @method GetMediaInfo
* @param {Int} InstanceID An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxySchemasUpnpOrgAVTransport1.prototype.GetMediaInfo = function(InstanceID, successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("GetMediaInfo", this.url, this.domain, this.type, this.version);		
    request.writeIntParameter("InstanceID", InstanceID);
    request.send(function(result){
		result["NrTracks"] = Zapp.SoapRequest.readIntParameter(result["NrTracks"]);	
		result["MediaDuration"] = Zapp.SoapRequest.readStringParameter(result["MediaDuration"]);	
		result["CurrentURI"] = Zapp.SoapRequest.readStringParameter(result["CurrentURI"]);	
		result["CurrentURIMetaData"] = Zapp.SoapRequest.readStringParameter(result["CurrentURIMetaData"]);	
		result["NextURI"] = Zapp.SoapRequest.readStringParameter(result["NextURI"]);	
		result["NextURIMetaData"] = Zapp.SoapRequest.readStringParameter(result["NextURIMetaData"]);	
		result["PlayMedium"] = Zapp.SoapRequest.readStringParameter(result["PlayMedium"]);	
		result["RecordMedium"] = Zapp.SoapRequest.readStringParameter(result["RecordMedium"]);	
		result["WriteStatus"] = Zapp.SoapRequest.readStringParameter(result["WriteStatus"]);	
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to GetTransportInfo
* @method GetTransportInfo
* @param {Int} InstanceID An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxySchemasUpnpOrgAVTransport1.prototype.GetTransportInfo = function(InstanceID, successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("GetTransportInfo", this.url, this.domain, this.type, this.version);		
    request.writeIntParameter("InstanceID", InstanceID);
    request.send(function(result){
		result["CurrentTransportState"] = Zapp.SoapRequest.readStringParameter(result["CurrentTransportState"]);	
		result["CurrentTransportStatus"] = Zapp.SoapRequest.readStringParameter(result["CurrentTransportStatus"]);	
		result["CurrentSpeed"] = Zapp.SoapRequest.readStringParameter(result["CurrentSpeed"]);	
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to GetPositionInfo
* @method GetPositionInfo
* @param {Int} InstanceID An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxySchemasUpnpOrgAVTransport1.prototype.GetPositionInfo = function(InstanceID, successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("GetPositionInfo", this.url, this.domain, this.type, this.version);		
    request.writeIntParameter("InstanceID", InstanceID);
    request.send(function(result){
		result["Track"] = Zapp.SoapRequest.readIntParameter(result["Track"]);	
		result["TrackDuration"] = Zapp.SoapRequest.readStringParameter(result["TrackDuration"]);	
		result["TrackMetaData"] = Zapp.SoapRequest.readStringParameter(result["TrackMetaData"]);	
		result["TrackURI"] = Zapp.SoapRequest.readStringParameter(result["TrackURI"]);	
		result["RelTime"] = Zapp.SoapRequest.readStringParameter(result["RelTime"]);	
		result["AbsTime"] = Zapp.SoapRequest.readStringParameter(result["AbsTime"]);	
		result["RelCount"] = Zapp.SoapRequest.readIntParameter(result["RelCount"]);	
		result["AbsCount"] = Zapp.SoapRequest.readIntParameter(result["AbsCount"]);	
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to GetDeviceCapabilities
* @method GetDeviceCapabilities
* @param {Int} InstanceID An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxySchemasUpnpOrgAVTransport1.prototype.GetDeviceCapabilities = function(InstanceID, successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("GetDeviceCapabilities", this.url, this.domain, this.type, this.version);		
    request.writeIntParameter("InstanceID", InstanceID);
    request.send(function(result){
		result["PlayMedia"] = Zapp.SoapRequest.readStringParameter(result["PlayMedia"]);	
		result["RecMedia"] = Zapp.SoapRequest.readStringParameter(result["RecMedia"]);	
		result["RecQualityModes"] = Zapp.SoapRequest.readStringParameter(result["RecQualityModes"]);	
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to GetTransportSettings
* @method GetTransportSettings
* @param {Int} InstanceID An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxySchemasUpnpOrgAVTransport1.prototype.GetTransportSettings = function(InstanceID, successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("GetTransportSettings", this.url, this.domain, this.type, this.version);		
    request.writeIntParameter("InstanceID", InstanceID);
    request.send(function(result){
		result["PlayMode"] = Zapp.SoapRequest.readStringParameter(result["PlayMode"]);	
		result["RecQualityMode"] = Zapp.SoapRequest.readStringParameter(result["RecQualityMode"]);	
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to Stop
* @method Stop
* @param {Int} InstanceID An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxySchemasUpnpOrgAVTransport1.prototype.Stop = function(InstanceID, successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("Stop", this.url, this.domain, this.type, this.version);		
    request.writeIntParameter("InstanceID", InstanceID);
    request.send(function(result){
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to Play
* @method Play
* @param {Int} InstanceID An action parameter
* @param {String} Speed An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxySchemasUpnpOrgAVTransport1.prototype.Play = function(InstanceID, Speed, successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("Play", this.url, this.domain, this.type, this.version);		
    request.writeIntParameter("InstanceID", InstanceID);
    request.writeStringParameter("Speed", Speed);
    request.send(function(result){
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to Pause
* @method Pause
* @param {Int} InstanceID An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxySchemasUpnpOrgAVTransport1.prototype.Pause = function(InstanceID, successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("Pause", this.url, this.domain, this.type, this.version);		
    request.writeIntParameter("InstanceID", InstanceID);
    request.send(function(result){
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to Record
* @method Record
* @param {Int} InstanceID An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxySchemasUpnpOrgAVTransport1.prototype.Record = function(InstanceID, successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("Record", this.url, this.domain, this.type, this.version);		
    request.writeIntParameter("InstanceID", InstanceID);
    request.send(function(result){
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to Seek
* @method Seek
* @param {Int} InstanceID An action parameter
* @param {String} Unit An action parameter
* @param {String} Target An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxySchemasUpnpOrgAVTransport1.prototype.Seek = function(InstanceID, Unit, Target, successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("Seek", this.url, this.domain, this.type, this.version);		
    request.writeIntParameter("InstanceID", InstanceID);
    request.writeStringParameter("Unit", Unit);
    request.writeStringParameter("Target", Target);
    request.send(function(result){
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to Next
* @method Next
* @param {Int} InstanceID An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxySchemasUpnpOrgAVTransport1.prototype.Next = function(InstanceID, successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("Next", this.url, this.domain, this.type, this.version);		
    request.writeIntParameter("InstanceID", InstanceID);
    request.send(function(result){
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to Previous
* @method Previous
* @param {Int} InstanceID An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxySchemasUpnpOrgAVTransport1.prototype.Previous = function(InstanceID, successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("Previous", this.url, this.domain, this.type, this.version);		
    request.writeIntParameter("InstanceID", InstanceID);
    request.send(function(result){
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to SetPlayMode
* @method SetPlayMode
* @param {Int} InstanceID An action parameter
* @param {String} NewPlayMode An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxySchemasUpnpOrgAVTransport1.prototype.SetPlayMode = function(InstanceID, NewPlayMode, successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("SetPlayMode", this.url, this.domain, this.type, this.version);		
    request.writeIntParameter("InstanceID", InstanceID);
    request.writeStringParameter("NewPlayMode", NewPlayMode);
    request.send(function(result){
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to SetRecordQualityMode
* @method SetRecordQualityMode
* @param {Int} InstanceID An action parameter
* @param {String} NewRecordQualityMode An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxySchemasUpnpOrgAVTransport1.prototype.SetRecordQualityMode = function(InstanceID, NewRecordQualityMode, successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("SetRecordQualityMode", this.url, this.domain, this.type, this.version);		
    request.writeIntParameter("InstanceID", InstanceID);
    request.writeStringParameter("NewRecordQualityMode", NewRecordQualityMode);
    request.send(function(result){
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}


/**
* A service action to GetCurrentTransportActions
* @method GetCurrentTransportActions
* @param {Int} InstanceID An action parameter
* @param {Function} successFunction The function that is executed when the action has completed successfully
* @param {Function} errorFunction The function that is executed when the action has cause an error
*/
CpProxySchemasUpnpOrgAVTransport1.prototype.GetCurrentTransportActions = function(InstanceID, successFunction, errorFunction){	
	var request = new Zapp.SoapRequest("GetCurrentTransportActions", this.url, this.domain, this.type, this.version);		
    request.writeIntParameter("InstanceID", InstanceID);
    request.send(function(result){
		result["Actions"] = Zapp.SoapRequest.readStringParameter(result["Actions"]);	
	
		if (successFunction){
			successFunction(result);
		}
	}, function(message, transport) {
		if (errorFunction) {errorFunction(message, transport);}
	});
}



