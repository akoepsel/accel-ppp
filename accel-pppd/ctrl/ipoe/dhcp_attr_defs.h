#define VENDOR_DHCP 54
#define DHCP_Opcode 256
#define DHCP_Hardware_Type 257
#define DHCP_Hardware_Address_Length 258
#define DHCP_Hop_Count 259
#define DHCP_Transaction_Id 260
#define DHCP_Number_of_Seconds 261
#define DHCP_Flags 262
#define DHCP_Client_IP_Address 263
#define DHCP_Your_IP_Address 264
#define DHCP_Server_IP_Address 265
#define DHCP_Gateway_IP_Address 266
#define DHCP_Client_Hardware_Address 267
#define DHCP_Server_Host_Name 268
#define DHCP_Boot_Filename 269
#define DHCP_Relay_To_IP_Address 270
#define DHCP_Relay_Max_Hop_Count 271
#define DHCP_Relay_IP_Address 272
#define DHCP_Flags_Broadcast 0x8000
#define DHCP_Hardware_Type_Ethernet 1
#define DHCP_Hardware_Type_Experiemental_Ethernet 2
#define DHCP_Hardware_Type_AX_25 3
#define DHCP_Hardware_Type_Proteon_Token_Ring 4
#define DHCP_Hardware_Type_Chaos 5
#define DHCP_Hardware_Type_IEEE_802 6
#define DHCP_Hardware_Type_Arcnet 7
#define DHCP_Hardware_Type_Hyperchannel 8
#define DHCP_Hardware_Type_Lanstar 9
#define DHCP_Hardware_Type_Autonet_Short_Address 10
#define DHCP_Hardware_Type_LocalTalk 11
#define DHCP_Hardware_Type_LocalNet 12
#define DHCP_Hardware_Type_Ultra_Link 13
#define DHCP_Hardware_Type_SMDS 14
#define DHCP_Hardware_Type_Frame_Relay 15
#define DHCP_Hardware_Type_ATM_16 16
#define DHCP_Hardware_Type_HDLC 17
#define DHCP_Hardware_Type_Fibre_Channel 18
#define DHCP_Hardware_Type_ATM_19 19
#define DHCP_Hardware_Type_Serial_Line 20
#define DHCP_Hardware_Type_ATM_21 21
#define DHCP_Hardware_Type_MIL_STD_188_220 22
#define DHCP_Hardware_Type_Metricom 23
#define DHCP_Hardware_Type_IEEE_1394 24
#define DHCP_Hardware_Type_MAPOS 25
#define DHCP_Hardware_Type_Twinaxial 26
#define DHCP_Hardware_Type_EUI_64 27
#define DHCP_Hardware_Type_HIPARP 28
#define DHCP_Hardware_Type_IP_Over_ISO_7816_3 29
#define DHCP_Hardware_Type_ARPSec 30
#define DHCP_Hardware_Type_IPSec_Tunnel 31
#define DHCP_Hardware_Type_Infiniband 32
#define DHCP_Hardware_Type_CAI_TIA_102 33
#define DHCP_Subnet_Mask 1
#define DHCP_Time_Offset 2
#define DHCP_Router_Address 3
#define DHCP_Time_Server 4
#define DHCP_IEN_116_Name_Server 5
#define DHCP_Domain_Name_Server 6
#define DHCP_Log_Server 7
#define DHCP_Quotes_Server 8
#define DHCP_LPR_Server 9
#define DHCP_Impress_Server 10
#define DHCP_RLP_Server 11
#define DHCP_Hostname 12
#define DHCP_Boot_File_Size 13
#define DHCP_Merit_Dump_File 14
#define DHCP_Domain_Name 15
#define DHCP_Swap_Server 16
#define DHCP_Root_Path 17
#define DHCP_Bootp_Extensions_Path 18
#define DHCP_IP_Forward_Enable 19
#define DHCP_Source_Route_Enable 20
#define DHCP_Policy_Filter 21
#define DHCP_Max_Datagram_Reassembly_Sz 22
#define DHCP_Default_IP_TTL 23
#define DHCP_Path_MTU_Aging_Timeout 24
#define DHCP_Path_MTU_Plateau_Table 25
#define DHCP_Interface_MTU_Size 26
#define DHCP_All_Subnets_Are_Local 27
#define DHCP_Broadcast_Address 28
#define DHCP_Perform_Mask_Discovery 29
#define DHCP_Provide_Mask_To_Others 30
#define DHCP_Perform_Router_Discovery 31
#define DHCP_Router_Solicitation_Address 32
#define DHCP_Static_Routes 33
#define DHCP_Trailer_Encapsulation 34
#define DHCP_ARP_Cache_Timeout 35
#define DHCP_Ethernet_Encapsulation 36
#define DHCP_Default_TCP_TTL 37
#define DHCP_Keep_Alive_Interval 38
#define DHCP_Keep_Alive_Garbage 39
#define DHCP_NIS_Domain_Name 40
#define DHCP_NIS_Servers 41
#define DHCP_NTP_Servers 42
#define DHCP_Vendor 43
#define DHCP_NETBIOS_Name_Servers 44
#define DHCP_NETBIOS_Dgm_Dist_Servers 45
#define DHCP_NETBIOS_Node_Type 46
#define DHCP_NETBIOS 47
#define DHCP_X_Window_Font_Server 48
#define DHCP_X_Window_Display_Mgr 49
#define DHCP_Requested_IP_Address 50
#define DHCP_IP_Address_Lease_Time 51
#define DHCP_Overload 52
#define DHCP_Message_Type 53
#define DHCP_DHCP_Server_Identifier 54
#define DHCP_Parameter_Request_List 55
#define DHCP_DHCP_Error_Message 56
#define DHCP_DHCP_Maximum_Msg_Size 57
#define DHCP_Renewal_Time 58
#define DHCP_Rebinding_Time 59
#define DHCP_Vendor_Class_Identifier 60
#define DHCP_Client_Identifier 61
#define DHCP_Netware_Domain_Name 62
#define DHCP_Netware_Sub_Options 63
#define DHCP_NIS_Client_Domain_Name 64
#define DHCP_NIS_Server_Address 65
#define DHCP_TFTP_Server_Name 66
#define DHCP_Boot_File_Name 67
#define DHCP_Home_Agent_Address 68
#define DHCP_SMTP_Server_Address 69
#define DHCP_POP3_Server_Address 70
#define DHCP_NNTP_Server_Address 71
#define DHCP_WWW_Server_Address 72
#define DHCP_Finger_Server_Address 73
#define DHCP_IRC_Server_Address 74
#define DHCP_StreetTalk_Server_Address 75
#define DHCP_STDA_Server_Address 76
#define DHCP_User_Class 77
#define DHCP_Directory_Agent 78
#define DHCP_Service_Scope 79
#define DHCP_Rapid_Commit 80
#define DHCP_Client_FQDN 81
#define DHCP_Relay_Agent_Information 82
#define DHCP_Agent_Circuit_Id 1
#define DHCP_Agent_Remote_Id 2
#define DHCP_Relay_Circuit_Id 1
#define DHCP_Relay_Remote_Id 2
#define DHCP_Docsis_Device_Class 4
#define DHCP_Relay_Link_Selection 5
#define DHCP_Subscriber_Id 6
#define DHCP_RADIUS_Attributes 7
#define DHCP_Authentication_Information 8
#define DHCP_Vendor_Specific_Information 9
#define DHCP_Relay_Agent_Flags 10
#define DHCP_Server_Identifier_Override 11
#define DHCP_iSNS 83
#define DHCP_NDS_Servers 85
#define DHCP_NDS_Tree_Name 86
#define DHCP_NDS_Context 87
#define DHCP_Authentication 90
#define DHCP_Client_Last_Txn_Time 91
#define DHCP_associated_ip 92
#define DHCP_Client_System 93
#define DHCP_Client_NDI 94
#define DHCP_LDAP 95
#define DHCP_UUID GUID
#define DHCP_User_Auth 98
#define DHCP_Netinfo_Address 112
#define DHCP_Netinfo_Tag 113
#define DHCP_URL 114
#define DHCP_Auto_Config 116
#define DHCP_Name_Service_Search 117
#define DHCP_Subnet_Selection_Option 118
#define DHCP_Domain_Search 119
#define DHCP_SIP_Servers_DHCP_Option 120
#define DHCP_Classless_Static_Route 121
#define DHCP_CCC 122
#define DHCP_GeoConf_Option 123
#define DHCP_V_I_Vendor_Class 124
#define DHCP_V_I_Vendor_Specific 125
#define DHCP_Etherboot 128
#define DHCP_TFTP_Server_IP_Address 128
#define DHCP_Call_Server_IP_address 129
#define DHCP_Ethernet_Interface 130
#define DHCP_Vendor_Discrimination_Str 130
#define DHCP_Remote_Stats_Svr_IP_Address 131
#define DHCP_IEEE_802_1Q_L2_Priority 132
#define DHCP_IEEE_802_1P_VLAN_ID 133
#define DHCP_Diffserv_Code_Point 134
#define DHCP_HTTP_Proxy 135
#define DHCP_Cisco_TFTP_Server_IP_Addresses 150
#define DHCP_End_Of_Options 255
#define DHCP_Opcode_Client_Message 1
#define DHCP_Opcode_Server_Message 2
#define DHCP_Message_Type_DHCP_Discover 1
#define DHCP_Message_Type_DHCP_Offer 2
#define DHCP_Message_Type_DHCP_Request 3
#define DHCP_Message_Type_DHCP_Decline 4
#define DHCP_Message_Type_DHCP_Ack 5
#define DHCP_Message_Type_DHCP_NAK 6
#define DHCP_Message_Type_DHCP_Release 7
#define DHCP_Message_Type_DHCP_Inform 8
#define DHCP_Message_Type_DHCP_Force_Renew 9
#define DHCP_Parameter_Request_List_DHCP_Subnet_Mask 1
#define DHCP_Parameter_Request_List_DHCP_Time_Offset 2
#define DHCP_Parameter_Request_List_DHCP_Router_Address 3
#define DHCP_Parameter_Request_List_DHCP_Time_Server 4
#define DHCP_Parameter_Request_List_DHCP_IEN_116_Name_Server 5
#define DHCP_Parameter_Request_List_DHCP_Domain_Name_Server 6
#define DHCP_Parameter_Request_List_DHCP_Log_Server 7
#define DHCP_Parameter_Request_List_DHCP_Quotes_Server 8
#define DHCP_Parameter_Request_List_DHCP_LPR_Server 9
#define DHCP_Parameter_Request_List_DHCP_Impress_Server 10
#define DHCP_Parameter_Request_List_DHCP_RLP_Server 11
#define DHCP_Parameter_Request_List_DHCP_Hostname 12
#define DHCP_Parameter_Request_List_DHCP_Boot_File_Size 13
#define DHCP_Parameter_Request_List_DHCP_Merit_Dump_File 14
#define DHCP_Parameter_Request_List_DHCP_Domain_Name 15
#define DHCP_Parameter_Request_List_DHCP_Swap_Server 16
#define DHCP_Parameter_Request_List_DHCP_Root_Path 17
#define DHCP_Parameter_Request_List_DHCP_Bootp_Extensions_Path 18
#define DHCP_Parameter_Request_List_DHCP_IP_Forward_Enable 19
#define DHCP_Parameter_Request_List_DHCP_Source_Route_Enable 20
#define DHCP_Parameter_Request_List_DHCP_Policy_Filter 21
#define DHCP_Parameter_Request_List_DHCP_Max_Datagram_Reassembly_Sz 22
#define DHCP_Parameter_Request_List_DHCP_Default_IP_TTL 23
#define DHCP_Parameter_Request_List_DHCP_Path_MTU_Aging_Timeout 24
#define DHCP_Parameter_Request_List_DHCP_Path_MTU_Plateau_Table 25
#define DHCP_Parameter_Request_List_DHCP_Interface_MTU_Size 26
#define DHCP_Parameter_Request_List_DHCP_All_Subnets_Are_Local 27
#define DHCP_Parameter_Request_List_DHCP_Broadcast_Address 28
#define DHCP_Parameter_Request_List_DHCP_Perform_Mask_Discovery 29
#define DHCP_Parameter_Request_List_DHCP_Provide_Mask_To_Others 30
#define DHCP_Parameter_Request_List_DHCP_Perform_Router_Discovery 31
#define DHCP_Parameter_Request_List_DHCP_Router_Solicitation_Address 32
#define DHCP_Parameter_Request_List_DHCP_Static_Routes 33
#define DHCP_Parameter_Request_List_DHCP_Trailer_Encapsulation 34
#define DHCP_Parameter_Request_List_DHCP_ARP_Cache_Timeout 35
#define DHCP_Parameter_Request_List_DHCP_Ethernet_Encapsulation 36
#define DHCP_Parameter_Request_List_DHCP_Default_TCP_TTL 37
#define DHCP_Parameter_Request_List_DHCP_Keep_Alive_Interval 38
#define DHCP_Parameter_Request_List_DHCP_Keep_Alive_Garbage 39
#define DHCP_Parameter_Request_List_DHCP_NIS_Domain_Name 40
#define DHCP_Parameter_Request_List_DHCP_NIS_Servers 41
#define DHCP_Parameter_Request_List_DHCP_NTP_Servers 42
#define DHCP_Parameter_Request_List_DHCP_Vendor 43
#define DHCP_Parameter_Request_List_DHCP_NETBIOS_Name_Servers 44
#define DHCP_Parameter_Request_List_DHCP_NETBIOS_Dgm_Dist_Servers 45
#define DHCP_Parameter_Request_List_DHCP_NETBIOS_Node_Type 46
#define DHCP_Parameter_Request_List_DHCP_NETBIOS 47
#define DHCP_Parameter_Request_List_DHCP_X_Window_Font_Server 48
#define DHCP_Parameter_Request_List_DHCP_X_Window_Display_Mgr 49
#define DHCP_Parameter_Request_List_DHCP_Requested_IP_Address 50
#define DHCP_Parameter_Request_List_DHCP_IP_Address_Lease_Time 51
#define DHCP_Parameter_Request_List_DHCP_Overload 52
#define DHCP_Parameter_Request_List_DHCP_Message_Type 53
#define DHCP_Parameter_Request_List_DHCP_DHCP_Server_Identifier 54
#define DHCP_Parameter_Request_List_DHCP_Parameter_Request_List 55
#define DHCP_Parameter_Request_List_DHCP_DHCP_Error_Message 56
#define DHCP_Parameter_Request_List_DHCP_DHCP_Maximum_Msg_Size 57
#define DHCP_Parameter_Request_List_DHCP_Renewal_Time 58
#define DHCP_Parameter_Request_List_DHCP_Rebinding_Time 59
#define DHCP_Parameter_Request_List_DHCP_Class_Identifier 60
#define DHCP_Parameter_Request_List_DHCP_Client_Identifier 61
#define DHCP_Parameter_Request_List_DHCP_Netware_Domain_Name 62
#define DHCP_Parameter_Request_List_DHCP_Netware_Sub_Options 63
#define DHCP_Parameter_Request_List_DHCP_NIS_Client_Domain_Name 64
#define DHCP_Parameter_Request_List_DHCP_NIS_Server_Address 65
#define DHCP_Parameter_Request_List_DHCP_TFTP_Server_Name 66
#define DHCP_Parameter_Request_List_DHCP_Boot_File_Name 67
#define DHCP_Parameter_Request_List_DHCP_Home_Agent_Address 68
#define DHCP_Parameter_Request_List_DHCP_SMTP_Server_Address 69
#define DHCP_Parameter_Request_List_DHCP_POP3_Server_Address 70
#define DHCP_Parameter_Request_List_DHCP_NNTP_Server_Address 71
#define DHCP_Parameter_Request_List_DHCP_WWW_Server_Address 72
#define DHCP_Parameter_Request_List_DHCP_Finger_Server_Address 73
#define DHCP_Parameter_Request_List_DHCP_IRC_Server_Address 74
#define DHCP_Parameter_Request_List_DHCP_StreetTalk_Server_Address 75
#define DHCP_Parameter_Request_List_DHCP_STDA_Server_Address 76
#define DHCP_Parameter_Request_List_DHCP_User_Class 77
#define DHCP_Parameter_Request_List_DHCP_Directory_Agent 78
#define DHCP_Parameter_Request_List_DHCP_Service_Scope 79
#define DHCP_Parameter_Request_List_DHCP_Rapid_Commit 80
#define DHCP_Parameter_Request_List_DHCP_Client_FQDN 81
#define DHCP_Parameter_Request_List_DHCP_Relay_Agent_Information 82
#define DHCP_Parameter_Request_List_DHCP_iSNS 83
#define DHCP_Parameter_Request_List_DHCP_NDS_Servers 85
#define DHCP_Parameter_Request_List_DHCP_NDS_Tree_Name 86
#define DHCP_Parameter_Request_List_DHCP_NDS_Context 87
#define DHCP_Parameter_Request_List_DHCP_Authentication 90
#define DHCP_Parameter_Request_List_DHCP_Client_Last_Txn_Time 91
#define DHCP_Parameter_Request_List_DHCP_associated_ip 92
#define DHCP_Parameter_Request_List_DHCP_Client_System 93
#define DHCP_Parameter_Request_List_DHCP_Client_NDI 94
#define DHCP_Parameter_Request_List_DHCP_LDAP 95
#define DHCP_Parameter_Request_List_DHCP_UUID GUID
#define DHCP_Parameter_Request_List_DHCP_User_Auth 98
#define DHCP_Parameter_Request_List_DHCP_Netinfo_Address 112
#define DHCP_Parameter_Request_List_DHCP_Netinfo_Tag 113
#define DHCP_Parameter_Request_List_DHCP_URL 114
#define DHCP_Parameter_Request_List_DHCP_Auto_Config 116
#define DHCP_Parameter_Request_List_DHCP_Name_Service_Search 117
#define DHCP_Parameter_Request_List_DHCP_Subnet_Selection_Option 118
#define DHCP_Parameter_Request_List_DHCP_Domain_Search 119
#define DHCP_Parameter_Request_List_DHCP_SIP_Servers_DHCP_Option 120
#define DHCP_Parameter_Request_List_DHCP_Classless_Static_Route 121
#define DHCP_Parameter_Request_List_DHCP_CCC 122
#define DHCP_Parameter_Request_List_DHCP_GeoConf_Option 123
#define DHCP_Parameter_Request_List_DHCP_V_I_Vendor_Class 124
#define DHCP_Parameter_Request_List_DHCP_V_I_Vendor_Specific 125
#define DHCP_Parameter_Request_List_DHCP_Etherboot 128
#define DHCP_Parameter_Request_List_DHCP_TFTP_Server_IP_Address 128
#define DHCP_Parameter_Request_List_DHCP_Call_Server_IP_address 129
#define DHCP_Parameter_Request_List_DHCP_Ethernet_Interface 130
#define DHCP_Parameter_Request_List_DHCP_Vendor_Discrimination_Str 130
#define DHCP_Parameter_Request_List_DHCP_Remote_Stats_Svr_IP_Address 131
#define DHCP_Parameter_Request_List_DHCP_IEEE_802_1P_VLAN_ID 132
#define DHCP_Parameter_Request_List_DHCP_IEEE_802_1Q_L2_Priority 133
#define DHCP_Parameter_Request_List_DHCP_Diffserv_Code_Point 134
#define DHCP_Parameter_Request_List_DHCP_HTTP_Proxy 135
